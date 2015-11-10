#ifndef ALI_ALERT_LIST_DB_SOURCE_TYPESH
#define ALI_ALERT_LIST_DB_SOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertListDBSourceRequestType {
  std::string project_name;
  std::string source_name;
  std::string page;
  std::string page_size;
};
struct AlertListDBSourceResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
