#ifndef ALI_RKVSTORE_DESCRIBE_COMMODITY_TYPESH
#define ALI_RKVSTORE_DESCRIBE_COMMODITY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeCommodityRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string commodity_code;
  std::string instance_id;
  std::string order_type;
};
struct RkvstoreDescribeCommodityResponseType {
  std::string commodity;
};
} // end namespace
#endif
