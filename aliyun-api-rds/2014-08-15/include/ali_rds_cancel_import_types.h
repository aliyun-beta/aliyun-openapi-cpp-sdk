#ifndef ALI_RDS_CANCEL_IMPORT_TYPESH
#define ALI_RDS_CANCEL_IMPORT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsCancelImportRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string import_id;
  std::string owner_account;
};
struct RdsCancelImportResponseType {
};
} // end namespace
#endif
