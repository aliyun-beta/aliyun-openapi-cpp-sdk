#ifndef ALI_LIST_REGIONS_TYPESH
#define ALI_LIST_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListRegionsRequestType {
};
struct ListRegionsRegionTypeType {
  std::string name;
  std::string id;
  std::string as_url;
};
struct ListRegionsResponseType {
  std::vector<ListRegionsRegionTypeType> region_types;
};
} // end namespace
#endif
