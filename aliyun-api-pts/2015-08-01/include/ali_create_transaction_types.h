#ifndef ALI_CREATE_TRANSACTION_TYPESH
#define ALI_CREATE_TRANSACTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateTransactionRequestType {
  std::string script_id;
  std::string transaction_name;
};
struct CreateTransactionResponseType {
  int transaction_id;
};
} // end namespace
#endif
