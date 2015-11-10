#ifndef ALI_SLB_ADD_LISTENER_WHITE_LIST_ITEM_TYPESH
#define ALI_SLB_ADD_LISTENER_WHITE_LIST_ITEM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbAddListenerWhiteListItemRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string source_items;
  std::string owner_account;
};
struct SlbAddListenerWhiteListItemResponseType {
};
} // end namespace
#endif
