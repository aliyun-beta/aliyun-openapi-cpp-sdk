#ifndef ALI_PTS_SEND_WANG_WANG_TYPESH
#define ALI_PTS_SEND_WANG_WANG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSSendWangWangRequestType {
  std::string to;
  std::string title;
  std::string msg;
};
struct PTSSendWangWangResponseType {
};
} // end namespace
#endif
