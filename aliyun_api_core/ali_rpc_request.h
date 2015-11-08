#ifndef ALIYUNAPICORE_ALIYUNRPCREQUEST_H
#define ALIYUNAPICORE_ALIYUNRPCREQUEST_H
#include "ali_http_request.h"
class AliRpcRequest : public AliHttpRequest {
public:
  AliRpcRequest(std::string version, std::string appid, std::string secret, std::string url);
  virtual int CommitRequest();
private:
  std::string GetSignUrl();
private:
  std::string utc_time_;
  std::string sign_nounce;
  std::string version_;
  std::string appid_;
  std::string secret_;
  std::string url_;
};
#endif