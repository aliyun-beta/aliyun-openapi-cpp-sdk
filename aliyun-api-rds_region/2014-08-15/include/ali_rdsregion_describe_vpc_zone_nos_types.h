#ifndef ALI_RDSREGION_DESCRIBE_VPC_ZONE_NOS_TYPESH
#define ALI_RDSREGION_DESCRIBE_VPC_ZONE_NOS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeVpcZoneNosRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string owner_account;
  std::string region;
  std::string zone_id;
};
struct RdsRegionDescribeVpcZoneNosVpcZoneIdType {
  std::string zone_id;
  std::string region;
  std::string sub_domain;
};
struct RdsRegionDescribeVpcZoneNosResponseType {
  std::vector<RdsRegionDescribeVpcZoneNosVpcZoneIdType> items;
};
} // end namespace
#endif
