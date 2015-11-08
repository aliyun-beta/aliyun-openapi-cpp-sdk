#ifndef ALI_CMSH
#define ALI_CMSH
#include <string>
#include "ali_describe_metric_datum_types.h"
#include "ali_put_metric_datum_types.h"
namespace aliyun {
struct AliCmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Cms {
public:
  static Cms* CreateCmsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Cms(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-07-29"),
  host_(host) {}
public:
  int DescribeMetricDatum(const DescribeMetricDatumRequestType& req,
          DescribeMetricDatumResponseType* resp,
          AliCmsErrorInfo* error_info);

  int PutMetricDatum(const PutMetricDatumRequestType& req,
          PutMetricDatumResponseType* resp,
          AliCmsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
