#include "ali_roa_request.h"
#include "ali_string_utils.h"
#include "ali_encode_utils.h"
#include "ali_urlencode.h"
#include "ali_log.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
std::string getHttpGmtTime() {
  time_t t = time(NULL);
  char szBuf[128]={0};
  strftime(szBuf , 127 , "%a, %d %b %Y %H:%M:%S" , gmtime(&t));
  strcat(szBuf, " GMT");
  return szBuf;
}


AliRoaRequest::AliRoaRequest(std::string version, 
                                   std::string appid,
                                   std::string secret,
                                   std::string url)
                                   : AliHttpRequest(url),
                                   version_(version),
                                   appid_(appid),
                                   secret_(secret),
                                   url_(url) {

}

int AliRoaRequest::CommitRequest() {
  std::string gmt_time = getHttpGmtTime();

  std::string compose_url = this->method_ + "\n";
  if(map_request_headers_.find("Accept") != map_request_headers_.end()) {
    compose_url.append(map_request_headers_["Accept"]);
  }
  compose_url.append("\n");
  if(map_request_headers_.find("Content-Md5") != map_request_headers_.end()) {
    compose_url.append(map_request_headers_["Content-Md5"]);
  } 
  compose_url.append("\n");
  if(map_request_headers_.find("Content-Type") != map_request_headers_.end()) {
    compose_url.append(map_request_headers_["Content-Type"]);
  }

  compose_url.append("\n");
  compose_url.append(gmt_time);
  compose_url.append("\n");
  compose_url.append("x-acs-signature-method:HMAC-SHA1\n");
  compose_url.append("x-acs-signature-version:1.0\n");
  compose_url.append("x-acs-version:" + version_ + "\n");
  compose_url.append(this->GetPath());

  ALI_LOG("compose_url=%s\n", compose_url.c_str());

  std::string sign = encode_compute_hmac_sha1(this->secret_, (char *)compose_url.c_str(), compose_url.size());

  AddRequestHeader("Authorization", std::string("acs ") + appid_ + ":" + sign);
  AddRequestHeader("x-acs-signature-method", "HMAC-SHA1");
  AddRequestHeader("x-acs-signature-version", "1.0");
  AddRequestHeader("x-acs-version", version_);
  AddRequestHeader("Date", gmt_time);
  return AliHttpRequest::CommitRequest();
}
