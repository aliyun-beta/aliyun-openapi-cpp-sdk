#ifndef ALI_DESCRIBE_DRDS_DB_IP_WHITE_LIST_TYPESH
#define ALI_DESCRIBE_DRDS_DB_IP_WHITE_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDrdsDBIpWhiteListRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DescribeDrdsDBIpWhiteListDataType {
  std::vector<std::string> ip_white_list;
};
struct DescribeDrdsDBIpWhiteListResponseType {
  DescribeDrdsDBIpWhiteListDataType data;
  bool success;
};
} // end namespace
#endif
