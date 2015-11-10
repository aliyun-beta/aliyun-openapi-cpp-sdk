#ifndef ALI_DTS_DRC_GUID_ROUTE_API_TYPESH
#define ALI_DTS_DRC_GUID_ROUTE_API_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DtsdrcGuidRouteApiRequestType {
  std::string guid;
};
struct DtsdrcGuidRouteApiResponseType {
  bool success;
  std::string data;
};
} // end namespace
#endif
