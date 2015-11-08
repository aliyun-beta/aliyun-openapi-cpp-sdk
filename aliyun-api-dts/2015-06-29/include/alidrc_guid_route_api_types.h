#ifndef ALIDRC_GUID_ROUTE_API_TYPESH
#define ALIDRC_GUID_ROUTE_API_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct drcGuidRouteApiRequestType {
  std::string guid;
};
struct drcGuidRouteApiResponseType {
  bool success;
  std::string data;
};
} // end namespace
#endif
