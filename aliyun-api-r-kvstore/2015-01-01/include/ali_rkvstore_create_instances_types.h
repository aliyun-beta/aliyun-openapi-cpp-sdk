#ifndef ALI_RKVSTORE_CREATE_INSTANCES_TYPESH
#define ALI_RKVSTORE_CREATE_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreCreateInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instances;
  std::string token;
  std::string auto_pay;
};
struct RkvstoreCreateInstancesResponseType {
  std::string order_id;
};
} // end namespace
#endif
