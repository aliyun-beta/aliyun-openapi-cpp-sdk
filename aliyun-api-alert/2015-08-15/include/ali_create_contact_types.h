#ifndef ALI_CREATE_CONTACT_TYPESH
#define ALI_CREATE_CONTACT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateContactRequestType {
  std::string project_name;
  std::string contact;
};
struct CreateContactResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
