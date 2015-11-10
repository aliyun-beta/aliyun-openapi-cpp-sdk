#ifndef ALI_EMR_LIST_REGIONS_TYPESH
#define ALI_EMR_LIST_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListRegionsRequestType {
};
struct EmrListRegionsRegionTypeType {
  std::string name;
  std::string id;
  std::string as_url;
};
struct EmrListRegionsResponseType {
  std::vector<EmrListRegionsRegionTypeType> region_types;
};
} // end namespace
#endif
