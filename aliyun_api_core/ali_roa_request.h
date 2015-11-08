#ifndef ALIYUNAPICORE_ALIYUNROAREQUEST_H
#define ALIYUNAPICORE_ALIYUNROAREQUEST_H
#include <string>
#include "ali_http_request.h"
class AliRoaRequest : public AliHttpRequest {
public:
  AliRoaRequest(std::string version, std::string appid, std::string secret, std::string url);
  virtual int CommitRequest();

private:
  std::string GetSignUrl();
  std::string utc_time_;
  std::string sign_nounce;
  std::string version_;
  std::string appid_;
  std::string secret_;
  std::string url_;
};
#endif