#ifndef ALI_ECS_DELETE_ROUTE_ENTRY_TYPESH
#define ALI_ECS_DELETE_ROUTE_ENTRY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDeleteRouteEntryRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string route_table_id;
  std::string destination_cidr_block;
  std::string next_hop_id;
  std::string owner_account;
};
struct EcsDeleteRouteEntryResponseType {
};
} // end namespace
#endif
