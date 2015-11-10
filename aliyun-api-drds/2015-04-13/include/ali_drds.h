#ifndef ALI_DRDSH
#define ALI_DRDSH
#include <string>
#include "ali_drds_alter_table_types.h"
#include "ali_drds_cancel_dd_ltask_types.h"
#include "ali_drds_create_drds_db_types.h"
#include "ali_drds_create_drds_instance_types.h"
#include "ali_drds_create_index_types.h"
#include "ali_drds_create_table_types.h"
#include "ali_drds_delete_drds_db_types.h"
#include "ali_drds_describe_create_drds_instance_status_types.h"
#include "ali_drds_describe_dd_ltask_types.h"
#include "ali_drds_describe_drds_db_types.h"
#include "ali_drds_describe_drds_db_ip_white_list_types.h"
#include "ali_drds_describe_drds_dbs_types.h"
#include "ali_drds_describe_drds_instance_types.h"
#include "ali_drds_describe_drds_instances_types.h"
#include "ali_drds_drop_indexes_types.h"
#include "ali_drds_drop_tables_types.h"
#include "ali_drds_list_un_complete_tasks_types.h"
#include "ali_drds_modify_drds_db_passwd_types.h"
#include "ali_drds_modify_drds_instance_description_types.h"
#include "ali_drds_modify_drds_ip_white_list_types.h"
#include "ali_drds_remove_drds_instance_types.h"
namespace aliyun {
struct DrdsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Drds {
public:
  static Drds* CreateDrdsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Drds(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-04-13"),
  host_(host) {}
public:
  int AlterTable(const DrdsAlterTableRequestType& req,
          DrdsAlterTableResponseType* resp,
          DrdsErrorInfo* error_info);

  int CancelDDLTask(const DrdsCancelDDLTaskRequestType& req,
          DrdsCancelDDLTaskResponseType* resp,
          DrdsErrorInfo* error_info);

  int CreateDrdsDB(const DrdsCreateDrdsDBRequestType& req,
          DrdsCreateDrdsDBResponseType* resp,
          DrdsErrorInfo* error_info);

  int CreateDrdsInstance(const DrdsCreateDrdsInstanceRequestType& req,
          DrdsCreateDrdsInstanceResponseType* resp,
          DrdsErrorInfo* error_info);

  int CreateIndex(const DrdsCreateIndexRequestType& req,
          DrdsCreateIndexResponseType* resp,
          DrdsErrorInfo* error_info);

  int CreateTable(const DrdsCreateTableRequestType& req,
          DrdsCreateTableResponseType* resp,
          DrdsErrorInfo* error_info);

  int DeleteDrdsDB(const DrdsDeleteDrdsDBRequestType& req,
          DrdsDeleteDrdsDBResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeCreateDrdsInstanceStatus(const DrdsDescribeCreateDrdsInstanceStatusRequestType& req,
          DrdsDescribeCreateDrdsInstanceStatusResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeDDLTask(const DrdsDescribeDDLTaskRequestType& req,
          DrdsDescribeDDLTaskResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeDrdsDB(const DrdsDescribeDrdsDBRequestType& req,
          DrdsDescribeDrdsDBResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeDrdsDBIpWhiteList(const DrdsDescribeDrdsDBIpWhiteListRequestType& req,
          DrdsDescribeDrdsDBIpWhiteListResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeDrdsDBs(const DrdsDescribeDrdsDBsRequestType& req,
          DrdsDescribeDrdsDBsResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeDrdsInstance(const DrdsDescribeDrdsInstanceRequestType& req,
          DrdsDescribeDrdsInstanceResponseType* resp,
          DrdsErrorInfo* error_info);

  int DescribeDrdsInstances(const DrdsDescribeDrdsInstancesRequestType& req,
          DrdsDescribeDrdsInstancesResponseType* resp,
          DrdsErrorInfo* error_info);

  int DropIndexes(const DrdsDropIndexesRequestType& req,
          DrdsDropIndexesResponseType* resp,
          DrdsErrorInfo* error_info);

  int DropTables(const DrdsDropTablesRequestType& req,
          DrdsDropTablesResponseType* resp,
          DrdsErrorInfo* error_info);

  int ListUnCompleteTasks(const DrdsListUnCompleteTasksRequestType& req,
          DrdsListUnCompleteTasksResponseType* resp,
          DrdsErrorInfo* error_info);

  int ModifyDrdsDBPasswd(const DrdsModifyDrdsDBPasswdRequestType& req,
          DrdsModifyDrdsDBPasswdResponseType* resp,
          DrdsErrorInfo* error_info);

  int ModifyDrdsInstanceDescription(const DrdsModifyDrdsInstanceDescriptionRequestType& req,
          DrdsModifyDrdsInstanceDescriptionResponseType* resp,
          DrdsErrorInfo* error_info);

  int ModifyDrdsIpWhiteList(const DrdsModifyDrdsIpWhiteListRequestType& req,
          DrdsModifyDrdsIpWhiteListResponseType* resp,
          DrdsErrorInfo* error_info);

  int RemoveDrdsInstance(const DrdsRemoveDrdsInstanceRequestType& req,
          DrdsRemoveDrdsInstanceResponseType* resp,
          DrdsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
