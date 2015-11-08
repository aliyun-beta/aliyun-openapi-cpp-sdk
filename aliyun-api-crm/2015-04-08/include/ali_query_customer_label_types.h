#ifndef ALI_QUERY_CUSTOMER_LABEL_TYPESH
#define ALI_QUERY_CUSTOMER_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct QueryCustomerLabelRequestType {
  std::string label_series;
};
struct QueryCustomerLabelCustomerLabelType {
  std::string label;
  std::string label_series;
};
struct QueryCustomerLabelResponseType {
  std::vector<QueryCustomerLabelCustomerLabelType> data;
  bool success;
  std::string code;
  std::string message;
};
} // end namespace
#endif
