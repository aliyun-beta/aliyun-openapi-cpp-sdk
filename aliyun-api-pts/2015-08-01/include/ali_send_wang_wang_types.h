#ifndef ALI_SEND_WANG_WANG_TYPESH
#define ALI_SEND_WANG_WANG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SendWangWangRequestType {
  std::string to;
  std::string title;
  std::string msg;
};
struct SendWangWangResponseType {
};
} // end namespace
#endif
