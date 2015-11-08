#ifndef ALI_DESCRIBE_CREATE_DRDS_INSTANCE_STATUS_TYPESH
#define ALI_DESCRIBE_CREATE_DRDS_INSTANCE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeCreateDrdsInstanceStatusRequestType {
  std::string drds_instance_id;
};
struct DescribeCreateDrdsInstanceStatusDataType {
  std::string status;
};
struct DescribeCreateDrdsInstanceStatusResponseType {
  DescribeCreateDrdsInstanceStatusDataType data;
  bool success;
};
} // end namespace
#endif
