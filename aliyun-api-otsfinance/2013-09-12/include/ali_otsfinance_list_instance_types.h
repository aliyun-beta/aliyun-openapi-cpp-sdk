#ifndef ALI_OTSFINANCE_LIST_INSTANCE_TYPESH
#define ALI_OTSFINANCE_LIST_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsFinanceListInstanceInstanceInfoType {
  std::string instance_name;
  std::string instance_id;
  std::string version;
  std::string timestamp;
};
struct OtsFinanceListInstanceResponseType {
  std::vector<OtsFinanceListInstanceInstanceInfoType> instance_infos;
};
} // end namespace
#endif
