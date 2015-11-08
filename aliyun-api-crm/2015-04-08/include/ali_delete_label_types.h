#ifndef ALI_DELETE_LABEL_TYPESH
#define ALI_DELETE_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteLabelRequestType {
  std::string pk;
  std::string label_name;
  std::string label_series;
};
struct DeleteLabelResponseType {
  std::string result;
};
} // end namespace
#endif
