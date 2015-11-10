#ifndef ALI_CRM_ADD_LABEL_TYPESH
#define ALI_CRM_ADD_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CrmAddLabelRequestType {
  std::string pk;
  std::string label_name;
  std::string label_series;
  std::string end_time;
};
struct CrmAddLabelResponseType {
  std::string result;
};
} // end namespace
#endif
