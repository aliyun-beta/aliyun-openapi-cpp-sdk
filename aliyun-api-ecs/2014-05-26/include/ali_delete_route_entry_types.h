#ifndef ALI_DELETE_ROUTE_ENTRY_TYPESH
#define ALI_DELETE_ROUTE_ENTRY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteRouteEntryRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string route_table_id;
  std::string destination_cidr_block;
  std::string next_hop_id;
  std::string owner_account;
};
struct DeleteRouteEntryResponseType {
};
} // end namespace
#endif
