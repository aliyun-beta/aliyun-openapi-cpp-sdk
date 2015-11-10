#ifndef ALI_DRDS_DESCRIBE_DRDS_DB_IP_WHITE_LIST_TYPESH
#define ALI_DRDS_DESCRIBE_DRDS_DB_IP_WHITE_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeDrdsDBIpWhiteListRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DrdsDescribeDrdsDBIpWhiteListDataType {
  std::vector<std::string> ip_white_list;
};
struct DrdsDescribeDrdsDBIpWhiteListResponseType {
  DrdsDescribeDrdsDBIpWhiteListDataType data;
  bool success;
};
} // end namespace
#endif
