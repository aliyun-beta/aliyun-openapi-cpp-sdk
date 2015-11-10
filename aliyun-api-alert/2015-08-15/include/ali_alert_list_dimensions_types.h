#ifndef ALI_ALERT_LIST_DIMENSIONS_TYPESH
#define ALI_ALERT_LIST_DIMENSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertListDimensionsRequestType {
  std::string project_name;
  std::string alert_name;
  std::string page;
  std::string page_size;
};
struct AlertListDimensionsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
