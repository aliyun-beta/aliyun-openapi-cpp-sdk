#ifndef ALI_CMS_PUT_METRIC_DATUM_TYPESH
#define ALI_CMS_PUT_METRIC_DATUM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsPutMetricDatumRequestType {
  std::string resource_owner_id;
  std::string namespace_;
  std::string metrics;
};
struct CmsPutMetricDatumResponseType {
  std::string code;
  std::string message;
};
} // end namespace
#endif
