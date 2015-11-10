#ifndef ALI_PTS_CREATE_TRANSACTION_TYPESH
#define ALI_PTS_CREATE_TRANSACTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSCreateTransactionRequestType {
  std::string script_id;
  std::string transaction_name;
};
struct PTSCreateTransactionResponseType {
  int transaction_id;
};
} // end namespace
#endif
