#ifndef ALI_LIST_CONTACT_TYPESH
#define ALI_LIST_CONTACT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListContactRequestType {
  std::string project_name;
  std::string contact_name;
  std::string page;
  std::string page_size;
};
struct ListContactResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
