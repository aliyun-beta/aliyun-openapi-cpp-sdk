#ifndef ALI_DRDSH
#define ALI_DRDSH
#include <string>
#include "ali_alter_table_types.h"
#include "ali_cancel_dd_ltask_types.h"
#include "ali_create_drds_db_types.h"
#include "ali_create_drds_instance_types.h"
#include "ali_create_index_types.h"
#include "ali_create_table_types.h"
#include "ali_delete_drds_db_types.h"
#include "ali_describe_create_drds_instance_status_types.h"
#include "ali_describe_dd_ltask_types.h"
#include "ali_describe_drds_db_types.h"
#include "ali_describe_drds_db_ip_white_list_types.h"
#include "ali_describe_drds_dbs_types.h"
#include "ali_describe_drds_instance_types.h"
#include "ali_describe_drds_instances_types.h"
#include "ali_drop_indexes_types.h"
#include "ali_drop_tables_types.h"
#include "ali_list_un_complete_tasks_types.h"
#include "ali_modify_drds_db_passwd_types.h"
#include "ali_modify_drds_instance_description_types.h"
#include "ali_modify_drds_ip_white_list_types.h"
#include "ali_remove_drds_instance_types.h"
namespace aliyun {
struct AliDrdsErrorInfo {
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
  int AlterTable(const AlterTableRequestType& req,
          AlterTableResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int CancelDDLTask(const CancelDDLTaskRequestType& req,
          CancelDDLTaskResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int CreateDrdsDB(const CreateDrdsDBRequestType& req,
          CreateDrdsDBResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int CreateDrdsInstance(const CreateDrdsInstanceRequestType& req,
          CreateDrdsInstanceResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int CreateIndex(const CreateIndexRequestType& req,
          CreateIndexResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int CreateTable(const CreateTableRequestType& req,
          CreateTableResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DeleteDrdsDB(const DeleteDrdsDBRequestType& req,
          DeleteDrdsDBResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeCreateDrdsInstanceStatus(const DescribeCreateDrdsInstanceStatusRequestType& req,
          DescribeCreateDrdsInstanceStatusResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeDDLTask(const DescribeDDLTaskRequestType& req,
          DescribeDDLTaskResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeDrdsDB(const DescribeDrdsDBRequestType& req,
          DescribeDrdsDBResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeDrdsDBIpWhiteList(const DescribeDrdsDBIpWhiteListRequestType& req,
          DescribeDrdsDBIpWhiteListResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeDrdsDBs(const DescribeDrdsDBsRequestType& req,
          DescribeDrdsDBsResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeDrdsInstance(const DescribeDrdsInstanceRequestType& req,
          DescribeDrdsInstanceResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DescribeDrdsInstances(const DescribeDrdsInstancesRequestType& req,
          DescribeDrdsInstancesResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DropIndexes(const DropIndexesRequestType& req,
          DropIndexesResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int DropTables(const DropTablesRequestType& req,
          DropTablesResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int ListUnCompleteTasks(const ListUnCompleteTasksRequestType& req,
          ListUnCompleteTasksResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int ModifyDrdsDBPasswd(const ModifyDrdsDBPasswdRequestType& req,
          ModifyDrdsDBPasswdResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int ModifyDrdsInstanceDescription(const ModifyDrdsInstanceDescriptionRequestType& req,
          ModifyDrdsInstanceDescriptionResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int ModifyDrdsIpWhiteList(const ModifyDrdsIpWhiteListRequestType& req,
          ModifyDrdsIpWhiteListResponseType* resp,
          AliDrdsErrorInfo* error_info);

  int RemoveDrdsInstance(const RemoveDrdsInstanceRequestType& req,
          RemoveDrdsInstanceResponseType* resp,
          AliDrdsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
