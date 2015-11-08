#ifndef ALI_PUT_METRIC_DATUM_TYPESH
#define ALI_PUT_METRIC_DATUM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PutMetricDatumRequestType {
  std::string resource_owner_id;
  std::string namespace_;
  std::string metrics;
};
struct PutMetricDatumResponseType {
  std::string code;
  std::string message;
};
} // end namespace
#endif
