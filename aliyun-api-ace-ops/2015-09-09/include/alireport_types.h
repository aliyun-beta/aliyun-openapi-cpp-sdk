#ifndef ALIREPORT_TYPESH
#define ALIREPORT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct reportRequestType {
  std::string group;
  std::string name;
  std::string ip;
  std::string type;
  std::string softversion;
  std::string config;
};
struct reportResponseType {
};
} // end namespace
#endif
