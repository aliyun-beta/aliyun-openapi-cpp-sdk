#ifndef ALI_RDS_CREATE_POSTPAID_DB_INSTANCE_FOR_CHANNEL_TYPESH
#define ALI_RDS_CREATE_POSTPAID_DB_INSTANCE_FOR_CHANNEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsCreatePostpaidDBInstanceForChannelRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string engine;
  std::string engine_version;
  std::string db_instance_class;
  std::string db_instance_storage;
  std::string db_instance_net_type;
  std::string db_instance_description;
  std::string security_ip_list;
  std::string owner_account;
};
struct RdsCreatePostpaidDBInstanceForChannelResponseType {
  std::string db_instance_id;
  std::string order_id;
  std::string connection_string;
  std::string port;
};
} // end namespace
#endif
