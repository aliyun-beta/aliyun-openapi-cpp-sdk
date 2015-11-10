#ifndef ALI_CRM_DELETE_LABEL_TYPESH
#define ALI_CRM_DELETE_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CrmDeleteLabelRequestType {
  std::string pk;
  std::string label_name;
  std::string label_series;
};
struct CrmDeleteLabelResponseType {
  std::string result;
};
} // end namespace
#endif
