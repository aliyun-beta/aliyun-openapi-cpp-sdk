#ifndef ALI_DESCRIBE_COMMODITY_TYPESH
#define ALI_DESCRIBE_COMMODITY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeCommodityRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string commodity_code;
  std::string instance_id;
  std::string order_type;
};
struct DescribeCommodityResponseType {
  std::string commodity;
};
} // end namespace
#endif
