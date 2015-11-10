#ifndef ALI_OTSFINANCE_UPDATE_INSTANCE_TYPESH
#define ALI_OTSFINANCE_UPDATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsFinanceUpdateInstanceRequestType {
  std::string instance_name;
  std::string write_capacity;
  std::string read_capacity;
  std::string entity_quota;
  std::string description;
};
struct OtsFinanceUpdateInstanceResponseType {
};
} // end namespace
#endif
