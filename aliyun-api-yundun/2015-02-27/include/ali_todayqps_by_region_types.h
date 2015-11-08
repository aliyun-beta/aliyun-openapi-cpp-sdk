#ifndef ALI_TODAYQPS_BY_REGION_TYPESH
#define ALI_TODAYQPS_BY_REGION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct TodayqpsByRegionRequestType {
};
struct TodayqpsByRegionRegionType {
  std::string region_id;
  long region_number;
  long region_flow;
};
struct TodayqpsByRegionResponseType {
  std::vector<TodayqpsByRegionRegionType> data;
};
} // end namespace
#endif
