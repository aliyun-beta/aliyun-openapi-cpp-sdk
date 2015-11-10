#ifndef ALI_OMS_GET_USER_DATA_TYPESH
#define ALI_OMS_GET_USER_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OmsGetUserDataRequestType {
  std::string owner_id;
  std::string owner_account;
  std::string product_name;
  std::string data_type;
  std::string start_time;
  std::string end_time;
  std::string next_token;
  std::string max_result;
};
struct OmsGetUserDataDataItemType {
  std::string name;
  std::string value;
};
struct OmsGetUserDataDataType {
  std::vector<OmsGetUserDataDataItemType> data_items;
};
struct OmsGetUserDataResponseType {
  std::vector<OmsGetUserDataDataType> data_list;
  std::string product_name;
  std::string data_type;
  std::string next_token;
};
} // end namespace
#endif
