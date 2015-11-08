#include "ali_rpc_request.h"
#include "ali_string_utils.h"
#include "ali_encode_utils.h"
#include "ali_urlencode.h"
#include <stdio.h>
static std::string get_utc_string() {
  time_t now;
  struct tm *timenow;
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

AliRpcRequest::AliRpcRequest(std::string version, 
                                   std::string appid,
                                   std::string secret,
                                   std::string url)
                                   : AliHttpRequest(url),
                                   version_(version),
                                   appid_(appid),
                                   secret_(secret),
                                   url_(url) {

}

std::string AliRpcRequest::GetSignUrl() {
  std::string encoded;
  std::map<std::string, std::string> mapWithPublicArgs;
    
  time_t now;
  time(&now);
  this->sign_nounce = get_format_string("%ld", now);
  this->utc_time_ = get_utc_string();
  if(this->query_.size()) {
    std::vector<std::string> vec_queries;
    strsplit(this->query_, vec_queries, "&");
    for(int i = 0; i < vec_queries.size(); i++) {
      std::string& item = vec_queries[i];
      int pos = item.find("=");
      mapWithPublicArgs[item.substr(0, pos)] = item.substr(pos + 1, item.size() - pos - 1);
    }
  }
  mapWithPublicArgs["Format"] = "JSON";
  mapWithPublicArgs["Version"] = this->version_;  //"2014-05-26";
  mapWithPublicArgs["AccessKeyId"] = this->appid_;
  mapWithPublicArgs["SignatureMethod"] = "HMAC-SHA1";
  mapWithPublicArgs["TimeStamp"] = utc_time_;
  mapWithPublicArgs["SignatureVersion"] = "1.0";
  mapWithPublicArgs["SignatureNonce"] = sign_nounce;//

  for(std::map<std::string, std::string>::iterator it = mapWithPublicArgs.begin();
      it != mapWithPublicArgs.end(); it++) {
    if(!encoded.empty()) {
      encoded.append("&");
    }
    append_format_string(encoded, "%s=%s", urlencode(it->first).c_str(), urlencode(it->second).c_str());
  }

  encoded = this->method_ + "&" + urlencode("/") + "&" + urlencode(encoded);
  printf("sign str=%s\n", encoded.c_str());
  return encoded;
}

int AliRpcRequest::CommitRequest() {
  std::string sign_url = GetSignUrl();
  std::string sign = encode_compute_hmac_sha1(this->secret_ + "&", 
                                              (char*)sign_url.c_str(),
                                              sign_url.size());
  AddRequestQuery("TimeStamp", utc_time_);
  AddRequestQuery("Format", "JSON");
  AddRequestQuery("Version", this->version_);
  AddRequestQuery("AccessKeyId", this->appid_);
  AddRequestQuery("SignatureMethod", "HMAC-SHA1");    
  AddRequestQuery("SignatureVersion", "1.0"); 
  AddRequestQuery("SignatureNonce", this->sign_nounce);
  AddRequestQuery("Signature", sign);
  return AliHttpRequest::CommitRequest();
}