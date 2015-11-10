#ifndef ALI_RDS_MODIFY_PARAMETER_TYPESH
#define ALI_RDS_MODIFY_PARAMETER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsModifyParameterRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string parameters;
  std::string forcerestart;
  std::string owner_account;
};
struct RdsModifyParameterResponseType {
};
} // end namespace
#endif
