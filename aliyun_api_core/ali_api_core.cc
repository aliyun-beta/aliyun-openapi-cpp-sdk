#include "ali_api_core.h"
#include "ali_http_request.h"
#include "ali_string_utils.h"
#include "ali_urlencode.h"
#include "ali_encode_utils.h"
#include "ali_sys_network.h"

#include <string.h>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <time.h>

static std::string get_utc_string() {
  time_t now;
  struct tm *timenow;   
  char strtemp[255];
  now = time(&now);
  timenow = gmtime(&now);
  std::string res=  get_format_string("%d-%02d-%02dT%02d:%02d:%02dZ", timenow->tm_year + 1900,
                           timenow->tm_mon + 1,
                           timenow->tm_mday,
                           timenow->tm_hour,
                           timenow->tm_min,
                           timenow->tm_sec);
  return res;
}

static std::string getHttpGmtTime() {
  time_t t = time( NULL );
  char szBuf[128]={0};
  strftime(szBuf , 127 , "%a, %d %b %Y %H:%M:%S" , gmtime(&t));
  strcat(szBuf, " GMT");
  return szBuf;
}

std::string getUniformUrl(std::string method, std::string singureNonce, std::string accessKeyId, std::map<std::string, std::string>& mapQueries) {
  std::string encoded;
  std::map<std::string, std::string> mapWithPublicArgs = mapQueries;
    
  
  mapWithPublicArgs["Format"] = "JSON";
  mapWithPublicArgs["Version"] = "2014-05-26";
  mapWithPublicArgs["AccessKeyId"] = accessKeyId;
  mapWithPublicArgs["SignatureMethod"] = "HMAC-SHA1";
  mapWithPublicArgs["TimeStamp"] = get_utc_string();
  mapWithPublicArgs["SignatureVersion"] = "1.0";
  mapWithPublicArgs["SignatureNonce"] = singureNonce;//

  for(std::map<std::string, std::string>::iterator it = mapWithPublicArgs.begin();
      it != mapWithPublicArgs.end(); it++) {
    if(!encoded.empty()) {
      encoded.append("&");
    }
    append_format_string(encoded, "%s=%s", urlencode(it->first).c_str(), urlencode(it->second).c_str());
  }

  encoded = method + "&" + urlencode("/") + "&" + urlencode(encoded);
  return encoded;
}

std::string computeUrlSignature(std::string uniformUrl, std::string secret_key) {
  return encode_compute_hmac_sha1(secret_key + "&", (char*)uniformUrl.c_str(), uniformUrl.size());
}

void addDefaultQuery(AliHttpRequest* req, std::string accessKeyId, std::string version) {
  req->AddRequestQuery("TimeStamp", get_utc_string())
      .AddRequestQuery("Format", "JSON")
      .AddRequestQuery("Version", version)
      .AddRequestQuery("AccessKeyId", accessKeyId)
      .AddRequestQuery("SignatureMethod", "HMAC-SHA1")       
      .AddRequestQuery("SignatureVersion", "1.0"); 
 }

int AliyunApiCoreGetResponse(std::string version,
                             std::string host,
                             std::string access_key_id,
                             std::string secret_key,
                             std::string sechema,
                             std::string method,
                             std::map<std::string, std::string>& mapQueries,
                             std::string* response_string) {
  time_t now;
  time(&now);
  std::string singure_once = get_format_string("%ld", now);
  std::string encode = getUniformUrl(method, singure_once, access_key_id, mapQueries);
  std::string sign = computeUrlSignature(encode, secret_key);
  AliHttpRequest* req = new AliHttpRequest(get_format_string("%s://%s/", sechema.c_str(), host.c_str()));
  addDefaultQuery(req, access_key_id, version);
  req->AddRequestQuery("SignatureNonce", singure_once);
  for(std::map<std::string, std::string>::iterator it = mapQueries.begin();
      it != mapQueries.end(); it++) {
    req->AddRequestQuery(it->first, it->second);
  }
  
  req->AddRequestQuery("Signature", sign);
  int res = req->CommitRequest();
  
  if(res != 0) {
    return -1;
  }
  res = req->WaitResponseHeaderComplete();

  std::string body;
  req->ReadResponseBody(body);

  if(response_string) {
    *response_string = body;
  }
  return res;
}

int AliyunApiCoreGetRoaResponse(std::string version, 
                                std::string host,
                                std::string appid,
                                std::string secret_key,
                                std::string sechema,
                                std::string method,
                                std::string path,
                                std::map<std::string, std::string>* mapQueries,
                                std::map<std::string, std::string>* mapExtraHeaders,
                                std::string& body,
                                std::string* response) {
  std::string gmt_time = getHttpGmtTime();
  /*
  std::string compose_url = std::string("GET\n"                             // method
                                        "application/octet-stream\n"        // accept encoding
                                        "\n"                                // content-md5
                                        "\n"                                // content-type
                                        ) + gmt_time +                      // gmt time
                                        "\nx-acs-signature-method:HMAC-SHA1\n"
                                        "x-acs-signature-version:1.0\n"
                                        "x-acs-version:2015-06-30\n"
                                        "/jobs/jobid";                      // path with query
                                        */
  std::string compose_url = method + "\n";
  if(mapExtraHeaders && mapExtraHeaders->find("Accept") != mapExtraHeaders->end()) {
    compose_url.append((*mapExtraHeaders)["Accept"]);
  }
  compose_url.append("\n");
  if(mapExtraHeaders && mapExtraHeaders->find("Content-Md5") != mapExtraHeaders->end()) {
    compose_url.append((*mapExtraHeaders)["Content-Md5"]);
  } else {
    printf("content md5 not found\n");
  }

  compose_url.append("\n");
  if(mapExtraHeaders && mapExtraHeaders->find("Content-Type") != mapExtraHeaders->end()) {
    compose_url.append((*mapExtraHeaders)["Content-Type"]);
  }
  bool is_first_query = true;
  if(mapQueries && mapQueries->size() > 0) {
    for(std::map<std::string, std::string>::iterator it = mapQueries->begin(); 
        it != mapQueries->end(); it++) {
      if(is_first_query) {
        is_first_query = false;
        path.append("?");
      } else {
        path.append("&");
      }
      path.append(it->first + "=" + it->second);
    }
  }

  
  compose_url.append("\n");
  compose_url.append(gmt_time);
  compose_url.append("\n");
  compose_url.append("x-acs-signature-method:HMAC-SHA1\n");
  compose_url.append("x-acs-signature-version:1.0\n");
  compose_url.append("x-acs-version:" + version + "\n");
  compose_url.append(path);

  printf("compose_url=%s\n", compose_url.c_str());

  std::string sign = encode_compute_hmac_sha1(secret_key, (char *)compose_url.c_str(), compose_url.size());
  std::string url = get_format_string("%s://%s", sechema.c_str(), host.c_str());
  if(path.size() > 0) {
    url.append(path);
  }

  printf("url=%s\n", url.c_str());
  AliHttpRequest* req = new AliHttpRequest(url);
  
  /*
  */

  req->AddRequestHeader("Authorization", std::string("acs ") + appid + ":" + sign);
  req->AddRequestHeader("x-acs-signature-method", "HMAC-SHA1");
  req->AddRequestHeader("x-acs-signature-version", "1.0");
  req->AddRequestHeader("x-acs-version", version);
  req->AddRequestHeader("Date", gmt_time);
  req->setRequestMethod(method);
  if(mapExtraHeaders && mapExtraHeaders->find("Content-Md5") != mapExtraHeaders->end()) {
     req->AddRequestHeader("Content-Md5", (*mapExtraHeaders)["Content-Md5"]);
  }

  int commit_ret = 0;
  if((method == "POST" || method == "PUT")) {
    commit_ret = req->CommitRequestWithBody(body);
  } else {
    commit_ret = req->CommitRequest();
  }


  if(commit_ret != 0) {
    return -1;
  }

  int status = req->WaitResponseHeaderComplete();
  if(response) {
    commit_ret = req->ReadResponseBody(*response);
  }
  return status;
}

#ifdef WIN32
int main() {
	WSADATA dt;
	WSAStartup(MAKEWORD(2,2), &dt);
	std::map<std::string, std::string> maps;
	maps["RegionId"] = "us-west-1";
	maps["Action"] = "DescribeInstances";
	AliyunApiCoreGetResponse("2014-05-26",
						     "ecs.aliyuncs.com",
							 "ihcf1RiiEb5hqYJ1",
							 "hjzRklsb6of9FlgmwxZyzTF33PbcbB",
							 "https",
							 "GET",maps,NULL);
	getchar();
}
#endif