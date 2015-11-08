#ifndef ALI_DESCRIBE_PARAMETER_TEMPLATES_TYPESH
#define ALI_DESCRIBE_PARAMETER_TEMPLATES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeParameterTemplatesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string engine;
  std::string engine_version;
  std::string owner_account;
};
struct DescribeParameterTemplatesTemplateRecordType {
  std::string parameter_name;
  std::string parameter_value;
  bool force_modify;
  bool force_restart;
  std::string checking_code;
  std::string parameter_description;
};
struct DescribeParameterTemplatesResponseType {
  std::vector<DescribeParameterTemplatesTemplateRecordType> parameters;
  std::string engine;
  std::string engine_version;
  std::string parameter_count;
};
} // end namespace
#endif
