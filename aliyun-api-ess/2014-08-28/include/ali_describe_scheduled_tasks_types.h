#ifndef ALI_DESCRIBE_SCHEDULED_TASKS_TYPESH
#define ALI_DESCRIBE_SCHEDULED_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeScheduledTasksRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_number;
  std::string page_size;
  std::string scheduled_action1;
  std::string scheduled_action2;
  std::string scheduled_action3;
  std::string scheduled_action4;
  std::string scheduled_action5;
  std::string scheduled_action6;
  std::string scheduled_action7;
  std::string scheduled_action8;
  std::string scheduled_action9;
  std::string scheduled_action10;
  std::string scheduled_action11;
  std::string scheduled_action12;
  std::string scheduled_action13;
  std::string scheduled_action14;
  std::string scheduled_action15;
  std::string scheduled_action16;
  std::string scheduled_action17;
  std::string scheduled_action18;
  std::string scheduled_action19;
  std::string scheduled_action20;
  std::string scheduled_task_id1;
  std::string scheduled_task_id2;
  std::string scheduled_task_id3;
  std::string scheduled_task_id4;
  std::string scheduled_task_id5;
  std::string scheduled_task_id6;
  std::string scheduled_task_id7;
  std::string scheduled_task_id8;
  std::string scheduled_task_id9;
  std::string scheduled_task_id10;
  std::string scheduled_task_id11;
  std::string scheduled_task_id12;
  std::string scheduled_task_id13;
  std::string scheduled_task_id14;
  std::string scheduled_task_id15;
  std::string scheduled_task_id16;
  std::string scheduled_task_id17;
  std::string scheduled_task_id18;
  std::string scheduled_task_id19;
  std::string scheduled_task_id20;
  std::string scheduled_task_name1;
  std::string scheduled_task_name2;
  std::string scheduled_task_name3;
  std::string scheduled_task_name4;
  std::string scheduled_task_name5;
  std::string scheduled_task_name6;
  std::string scheduled_task_name7;
  std::string scheduled_task_name8;
  std::string scheduled_task_name9;
  std::string scheduled_task_name10;
  std::string scheduled_task_name11;
  std::string scheduled_task_name12;
  std::string scheduled_task_name13;
  std::string scheduled_task_name14;
  std::string scheduled_task_name15;
  std::string scheduled_task_name16;
  std::string scheduled_task_name17;
  std::string scheduled_task_name18;
  std::string scheduled_task_name19;
  std::string scheduled_task_name20;
  std::string owner_account;
};
struct DescribeScheduledTasksScheduledTaskType {
  std::string scheduled_task_id;
  std::string scheduled_task_name;
  std::string description;
  std::string scheduled_action;
  std::string recurrence_end_time;
  std::string launch_time;
  std::string recurrence_type;
  std::string recurrence_value;
  int launch_expiration_time;
  bool task_enabled;
};
struct DescribeScheduledTasksResponseType {
  std::vector<DescribeScheduledTasksScheduledTaskType> scheduled_tasks;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
