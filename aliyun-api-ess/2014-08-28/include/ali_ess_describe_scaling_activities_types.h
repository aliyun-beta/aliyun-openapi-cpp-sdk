#ifndef ALI_ESS_DESCRIBE_SCALING_ACTIVITIES_TYPESH
#define ALI_ESS_DESCRIBE_SCALING_ACTIVITIES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssDescribeScalingActivitiesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_number;
  std::string page_size;
  std::string scaling_group_id;
  std::string status_code;
  std::string scaling_activity_id1;
  std::string scaling_activity_id2;
  std::string scaling_activity_id3;
  std::string scaling_activity_id4;
  std::string scaling_activity_id5;
  std::string scaling_activity_id6;
  std::string scaling_activity_id7;
  std::string scaling_activity_id8;
  std::string scaling_activity_id9;
  std::string scaling_activity_id10;
  std::string scaling_activity_id11;
  std::string scaling_activity_id12;
  std::string scaling_activity_id13;
  std::string scaling_activity_id14;
  std::string scaling_activity_id15;
  std::string scaling_activity_id16;
  std::string scaling_activity_id17;
  std::string scaling_activity_id18;
  std::string scaling_activity_id19;
  std::string scaling_activity_id20;
  std::string owner_account;
};
struct EssDescribeScalingActivitiesScalingActivityType {
  std::string scaling_activity_id;
  std::string scaling_group_id;
  std::string description;
  std::string cause;
  std::string start_time;
  std::string end_time;
  int progress;
  std::string status_code;
  std::string status_message;
};
struct EssDescribeScalingActivitiesResponseType {
  std::vector<EssDescribeScalingActivitiesScalingActivityType> scaling_activities;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
