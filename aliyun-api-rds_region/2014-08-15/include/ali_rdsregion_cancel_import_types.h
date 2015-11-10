#ifndef ALI_RDSREGION_CANCEL_IMPORT_TYPESH
#define ALI_RDSREGION_CANCEL_IMPORT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCancelImportRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string import_id;
  std::string owner_account;
};
struct RdsRegionCancelImportResponseType {
};
} // end namespace
#endif
