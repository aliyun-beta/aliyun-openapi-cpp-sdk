#ifndef ALI_OMS_GET_PRODUCT_DEFINE_TYPESH
#define ALI_OMS_GET_PRODUCT_DEFINE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OmsGetProductDefineRequestType {
  std::string product_name;
  std::string data_type;
};
struct OmsGetProductDefineTypeType {
  std::vector<std::string> fields;
  std::string data_type;
};
struct OmsGetProductDefineProductType {
  std::vector<OmsGetProductDefineTypeType> type_list;
  std::string product_name;
};
struct OmsGetProductDefineResponseType {
  std::vector<OmsGetProductDefineProductType> product_list;
  std::string product_name;
  std::string data_type;
};
} // end namespace
#endif
