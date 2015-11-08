#ifndef ALI_CHECK_LABEL_TYPESH
#define ALI_CHECK_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CheckLabelRequestType {
  std::string pk;
  std::string label_name;
  std::string label_series;
};
struct CheckLabelResponseType {
  bool result;
};
} // end namespace
#endif
