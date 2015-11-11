#ifndef ALI_YUNDUN_TODAYQPS_BY_REGION_TYPESH
#define ALI_YUNDUN_TODAYQPS_BY_REGION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunTodayqpsByRegionRegionType {
  std::string region_id;
  long region_number;
  long region_flow;
};
struct YundunTodayqpsByRegionResponseType {
  std::vector<YundunTodayqpsByRegionRegionType> data;
};
} // end namespace
#endif
