#ifndef ALI_DRDS_MODIFY_DRDS_IP_WHITE_LIST_TYPESH
#define ALI_DRDS_MODIFY_DRDS_IP_WHITE_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsModifyDrdsIpWhiteListRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string ip_white_list;
  std::string mode;
};
struct DrdsModifyDrdsIpWhiteListResponseType {
  bool success;
};
} // end namespace
#endif
