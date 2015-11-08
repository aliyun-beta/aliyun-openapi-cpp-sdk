#ifndef ALI_DESCRIBE_PARAMETERS_TYPESH
#define ALI_DESCRIBE_PARAMETERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeParametersRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct DescribeParametersDBInstanceParameterType {
  std::string parameter_name;
  std::string parameter_value;
  std::string parameter_description;
};
struct DescribeParametersResponseType {
  std::vector<DescribeParametersDBInstanceParameterType> config_parameters;
  std::vector<DescribeParametersDBInstanceParameterType> running_parameters;
  std::string engine;
  std::string engine_version;
};
} // end namespace
#endif
