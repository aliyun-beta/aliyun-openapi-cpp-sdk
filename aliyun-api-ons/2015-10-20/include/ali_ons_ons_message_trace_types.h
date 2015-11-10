#ifndef ALI_ONS_ONS_MESSAGE_TRACE_TYPESH
#define ALI_ONS_ONS_MESSAGE_TRACE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsMessageTraceRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string msg_id;
};
struct OnsOnsMessageTraceMessageTrackType {
  std::string consumer_group;
  std::string track_type;
  std::string exception_desc;
};
struct OnsOnsMessageTraceResponseType {
  std::vector<OnsOnsMessageTraceMessageTrackType> data;
  std::string help_url;
};
} // end namespace
#endif
