#ifndef ALI_GET_USER_DATA_TYPESH
#define ALI_GET_USER_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetUserDataRequestType {
  std::string owner_id;
  std::string owner_account;
  std::string product_name;
  std::string data_type;
  std::string start_time;
  std::string end_time;
  std::string next_token;
  std::string max_result;
};
struct GetUserDataDataItemType {
  std::string name;
  std::string value;
};
struct GetUserDataDataType {
  std::vector<GetUserDataDataItemType> data_items;
};
struct GetUserDataResponseType {
  std::vector<GetUserDataDataType> data_list;
  std::string product_name;
  std::string data_type;
  std::string next_token;
};
} // end namespace
#endif
