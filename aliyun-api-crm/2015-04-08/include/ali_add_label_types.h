#ifndef ALI_ADD_LABEL_TYPESH
#define ALI_ADD_LABEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddLabelRequestType {
  std::string pk;
  std::string label_name;
  std::string label_series;
  std::string end_time;
};
struct AddLabelResponseType {
  std::string result;
};
} // end namespace
#endif
