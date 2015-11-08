#ifndef ALI_DESCRIBE_VPC_ZONE_NOS_TYPESH
#define ALI_DESCRIBE_VPC_ZONE_NOS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeVpcZoneNosRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string owner_account;
  std::string region;
  std::string zone_id;
};
struct DescribeVpcZoneNosVpcZoneIdType {
  std::string zone_id;
  std::string region;
  std::string sub_domain;
};
struct DescribeVpcZoneNosResponseType {
  std::vector<DescribeVpcZoneNosVpcZoneIdType> items;
};
} // end namespace
#endif
