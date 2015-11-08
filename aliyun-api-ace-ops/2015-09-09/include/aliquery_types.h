#ifndef ALIQUERY_TYPESH
#define ALIQUERY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct queryRequestType {
  std::string group;
  std::string name;
  std::string ip;
  std::string softversion;
};
struct queryResponseType {
  std::string url;
  std::string softversion;
};
} // end namespace
#endif
