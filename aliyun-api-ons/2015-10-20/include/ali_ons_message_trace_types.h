#ifndef ALI_ONS_MESSAGE_TRACE_TYPESH
#define ALI_ONS_MESSAGE_TRACE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsMessageTraceRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string msg_id;
};
struct OnsMessageTraceMessageTrackType {
  std::string consumer_group;
  std::string track_type;
  std::string exception_desc;
};
struct OnsMessageTraceResponseType {
  std::vector<OnsMessageTraceMessageTrackType> data;
  std::string help_url;
};
} // end namespace
#endif
