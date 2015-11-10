#ifndef ALI_RDSREGION_CREATE_DB_INSTANCEFOR_FIRST_PAY_TYPESH
#define ALI_RDSREGION_CREATE_DB_INSTANCEFOR_FIRST_PAY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateDBInstanceforFirstPayRequestType {
  std::string uid;
  std::string bid;
  std::string uid_login_email;
  std::string bid_login_email;
  std::string engine;
  std::string engine_version;
  std::string db_instance_class;
  std::string db_instance_storage;
  std::string db_instance_net_type;
  std::string character_set_name;
  std::string db_instance_remarks;
  std::string client_token;
  std::string owner_account;
};
struct RdsRegionCreateDBInstanceforFirstPayResponseType {
  std::string db_instance_id;
  std::string connection_string;
  std::string port;
};
} // end namespace
#endif
