#ifndef ALI_CRM_CHECK_LABEL_TYPESH
#define ALI_CRM_CHECK_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CrmCheckLabelRequestType {
  std::string pk;
  std::string label_name;
  std::string label_series;
};
struct CrmCheckLabelResponseType {
  bool result;
};
} // end namespace
#endif
