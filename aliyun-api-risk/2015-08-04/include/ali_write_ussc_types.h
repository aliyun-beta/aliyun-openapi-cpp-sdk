#ifndef ALI_WRITE_USSC_TYPESH
#define ALI_WRITE_USSC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct WriteUsscRequestType {
  std::string app_key;
  std::string sign_time;
  std::string sign;
  std::string mtee_code;
  std::string code_type;
  std::string id_type;
  std::string user_id;
  std::string channel_type;
  std::string verify_result;
  std::string umid_token;
  std::string collina;
  std::string ip;
  std::string extend;
};
struct WriteUsscResponseType {
  std::string code;
};
} // end namespace
#endif
