#ifndef ALI_CRM_QUERY_CUSTOMER_LABEL_TYPESH
#define ALI_CRM_QUERY_CUSTOMER_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CrmQueryCustomerLabelRequestType {
  std::string label_series;
};
struct CrmQueryCustomerLabelCustomerLabelType {
  std::string label;
  std::string label_series;
};
struct CrmQueryCustomerLabelResponseType {
  std::vector<CrmQueryCustomerLabelCustomerLabelType> data;
  bool success;
  std::string code;
  std::string message;
};
} // end namespace
#endif
