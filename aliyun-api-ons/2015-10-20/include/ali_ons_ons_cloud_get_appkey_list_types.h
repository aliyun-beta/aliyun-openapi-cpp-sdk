#ifndef ALI_ONS_ONS_CLOUD_GET_APPKEY_LIST_TYPESH
#define ALI_ONS_ONS_CLOUD_GET_APPKEY_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsCloudGetAppkeyListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string isv_id;
};
struct OnsOnsCloudGetAppkeyListDataType {
  long app_status;
  std::string appkey;
  std::string description;
  long isv_id;
  std::string support_email;
  std::string title;
  std::string wangwang;
};
struct OnsOnsCloudGetAppkeyListResponseType {
  OnsOnsCloudGetAppkeyListDataType data;
  std::string help_url;
};
} // end namespace
#endif
