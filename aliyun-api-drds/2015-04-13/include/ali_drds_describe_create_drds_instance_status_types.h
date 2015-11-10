#ifndef ALI_DRDS_DESCRIBE_CREATE_DRDS_INSTANCE_STATUS_TYPESH
#define ALI_DRDS_DESCRIBE_CREATE_DRDS_INSTANCE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeCreateDrdsInstanceStatusRequestType {
  std::string drds_instance_id;
};
struct DrdsDescribeCreateDrdsInstanceStatusDataType {
  std::string status;
};
struct DrdsDescribeCreateDrdsInstanceStatusResponseType {
  DrdsDescribeCreateDrdsInstanceStatusDataType data;
  bool success;
};
} // end namespace
#endif
