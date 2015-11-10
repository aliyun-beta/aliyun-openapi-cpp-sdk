#ifndef ALI_CMSH
#define ALI_CMSH
#include <string>
#include "ali_cms_describe_metric_datum_types.h"
namespace aliyun {
struct CmsErrorInfo {
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
  version_("2015-04-20"),
  host_(host) {}
public:
  int DescribeMetricDatum(const CmsDescribeMetricDatumRequestType& req,
          CmsDescribeMetricDatumResponseType* resp,
          CmsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
