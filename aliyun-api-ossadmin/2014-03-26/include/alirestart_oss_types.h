#ifndef ALIRESTART_OSS_TYPESH
#define ALIRESTART_OSS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct restartOssRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string region;
  std::string owner_account;
};
struct restartOssResponseType {
  std::string code;
  std::string message;
  bool success;
  long ali_uid;
  std::string instance_id;
  std::string instacne_status;
  std::string instance_name;
  std::string start_time;
  std::string end_time;
};
} // end namespace
#endif
