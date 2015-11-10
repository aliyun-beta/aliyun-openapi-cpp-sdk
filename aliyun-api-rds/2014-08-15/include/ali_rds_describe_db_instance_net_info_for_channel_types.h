#ifndef ALI_RDS_DESCRIBE_DB_INSTANCE_NET_INFO_FOR_CHANNEL_TYPESH
#define ALI_RDS_DESCRIBE_DB_INSTANCE_NET_INFO_FOR_CHANNEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeDBInstanceNetInfoForChannelRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string flag;
  std::string owner_account;
};
struct RdsDescribeDBInstanceNetInfoForChannelsecurityIPGroupsType {
  std::string security_ip_group_name;
  std::string security_ips;
};
struct RdsDescribeDBInstanceNetInfoForChannelDBInstanceNetInfoType {
  std::vector<RdsDescribeDBInstanceNetInfoForChannelsecurityIPGroupsType> security_ip_groups;
  std::string connection_string;
  std::string ip_address;
  std::string ip_type;
  std::string port;
  std::string vp_cid;
  std::string vswitch_id;
};
struct RdsDescribeDBInstanceNetInfoForChannelResponseType {
  std::vector<RdsDescribeDBInstanceNetInfoForChannelDBInstanceNetInfoType> db_instance_net_infos;
  std::string instance_network_type;
};
} // end namespace
#endif
