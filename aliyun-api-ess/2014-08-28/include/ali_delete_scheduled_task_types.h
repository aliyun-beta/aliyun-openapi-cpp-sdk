#ifndef ALI_DELETE_SCHEDULED_TASK_TYPESH
#define ALI_DELETE_SCHEDULED_TASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteScheduledTaskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scheduled_task_id;
  std::string owner_account;
};
struct DeleteScheduledTaskResponseType {
};
} // end namespace
#endif
