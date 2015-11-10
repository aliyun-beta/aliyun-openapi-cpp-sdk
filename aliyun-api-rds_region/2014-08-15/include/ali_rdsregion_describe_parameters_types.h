#ifndef ALI_RDSREGION_DESCRIBE_PARAMETERS_TYPESH
#define ALI_RDSREGION_DESCRIBE_PARAMETERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeParametersRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsRegionDescribeParametersDBInstanceParameterType {
  std::string parameter_name;
  std::string parameter_value;
  std::string parameter_description;
};
struct RdsRegionDescribeParametersResponseType {
  std::vector<RdsRegionDescribeParametersDBInstanceParameterType> config_parameters;
  std::vector<RdsRegionDescribeParametersDBInstanceParameterType> running_parameters;
  std::string engine;
  std::string engine_version;
};
} // end namespace
#endif
