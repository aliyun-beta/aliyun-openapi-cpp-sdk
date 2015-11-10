#ifndef ALI_ESS_MODIFY_SCHEDULED_TASK_TYPESH
#define ALI_ESS_MODIFY_SCHEDULED_TASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssModifyScheduledTaskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scheduled_task_id;
  std::string scheduled_task_name;
  std::string description;
  std::string scheduled_action;
  std::string recurrence_end_time;
  std::string launch_time;
  std::string recurrence_type;
  std::string recurrence_value;
  std::string task_enabled;
  std::string launch_expiration_time;
  std::string owner_account;
};
struct EssModifyScheduledTaskResponseType {
};
} // end namespace
#endif
