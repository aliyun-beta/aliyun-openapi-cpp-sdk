#ifndef ALI_GET_PRODUCT_DEFINE_TYPESH
#define ALI_GET_PRODUCT_DEFINE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetProductDefineRequestType {
  std::string product_name;
  std::string data_type;
};
struct GetProductDefineTypeType {
  std::vector<std::string> fields;
  std::string data_type;
};
struct GetProductDefineProductType {
  std::vector<GetProductDefineTypeType> type_list;
  std::string product_name;
};
struct GetProductDefineResponseType {
  std::vector<GetProductDefineProductType> product_list;
  std::string product_name;
  std::string data_type;
};
} // end namespace
#endif
