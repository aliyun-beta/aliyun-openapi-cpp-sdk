#ifndef ALI_CMSH
#define ALI_CMSH
#include <string>
#include "ali_batch_create_sql_metrics_types.h"
#include "ali_batch_put_dim_table_data_types.h"
#include "ali_batch_query_metric_types.h"
#include "ali_create_dim_table_types.h"
#include "ali_create_metric_stream_types.h"
#include "ali_create_project_types.h"
#include "ali_create_sql_metrics_types.h"
#include "ali_delete_dim_table_types.h"
#include "ali_delete_dim_table_data_types.h"
#include "ali_delete_metrics_types.h"
#include "ali_delete_metric_stream_types.h"
#include "ali_delete_project_types.h"
#include "ali_describe_metric_types.h"
#include "ali_describe_metric_datum_types.h"
#include "ali_get_dim_table_types.h"
#include "ali_get_metrics_meta_types.h"
#include "ali_get_metric_statistics_types.h"
#include "ali_get_metric_stream_types.h"
#include "ali_get_project_types.h"
#include "ali_get_sql_metrics_types.h"
#include "ali_list_dim_table_types.h"
#include "ali_list_metric_stream_types.h"
#include "ali_list_project_types.h"
#include "ali_list_sql_metrics_types.h"
#include "ali_put_dim_table_data_types.h"
#include "ali_query_incremental_types.h"
#include "ali_query_list_metric_types.h"
#include "ali_query_metric_types.h"
#include "ali_query_metric_top_ntypes.h"
#include "ali_query_statistics_types.h"
#include "ali_start_project_types.h"
#include "ali_status_project_types.h"
#include "ali_stop_project_types.h"
#include "ali_update_dim_table_types.h"
#include "ali_update_metric_stream_types.h"
#include "ali_update_project_types.h"
#include "ali_update_sql_metrics_types.h"
namespace aliyun {
struct AliCmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Cms {
public:
  static Cms* CreateCmsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Cms(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-10-20"),
  host_(host) {}
public:
  int BatchCreateSqlMetrics(const BatchCreateSqlMetricsRequestType& req,
          BatchCreateSqlMetricsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int BatchPutDimTableData(const BatchPutDimTableDataRequestType& req,
          BatchPutDimTableDataResponseType* resp,
          AliCmsErrorInfo* error_info);

  int BatchQueryMetric(const BatchQueryMetricRequestType& req,
          BatchQueryMetricResponseType* resp,
          AliCmsErrorInfo* error_info);

  int CreateDimTable(const CreateDimTableRequestType& req,
          CreateDimTableResponseType* resp,
          AliCmsErrorInfo* error_info);

  int CreateMetricStream(const CreateMetricStreamRequestType& req,
          CreateMetricStreamResponseType* resp,
          AliCmsErrorInfo* error_info);

  int CreateProject(const CreateProjectRequestType& req,
          CreateProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int CreateSqlMetrics(const CreateSqlMetricsRequestType& req,
          CreateSqlMetricsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DeleteDimTable(const DeleteDimTableRequestType& req,
          DeleteDimTableResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DeleteDimTableData(const DeleteDimTableDataRequestType& req,
          DeleteDimTableDataResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DeleteMetrics(const DeleteMetricsRequestType& req,
          DeleteMetricsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DeleteMetricStream(const DeleteMetricStreamRequestType& req,
          DeleteMetricStreamResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DeleteProject(const DeleteProjectRequestType& req,
          DeleteProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DescribeMetric(const DescribeMetricRequestType& req,
          DescribeMetricResponseType* resp,
          AliCmsErrorInfo* error_info);

  int DescribeMetricDatum(const DescribeMetricDatumRequestType& req,
          DescribeMetricDatumResponseType* resp,
          AliCmsErrorInfo* error_info);

  int GetDimTable(const GetDimTableRequestType& req,
          GetDimTableResponseType* resp,
          AliCmsErrorInfo* error_info);

  int GetMetricsMeta(const GetMetricsMetaRequestType& req,
          GetMetricsMetaResponseType* resp,
          AliCmsErrorInfo* error_info);

  int GetMetricStatistics(const GetMetricStatisticsRequestType& req,
          GetMetricStatisticsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int GetMetricStream(const GetMetricStreamRequestType& req,
          GetMetricStreamResponseType* resp,
          AliCmsErrorInfo* error_info);

  int GetProject(const GetProjectRequestType& req,
          GetProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int GetSqlMetrics(const GetSqlMetricsRequestType& req,
          GetSqlMetricsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int ListDimTable(const ListDimTableRequestType& req,
          ListDimTableResponseType* resp,
          AliCmsErrorInfo* error_info);

  int ListMetricStream(const ListMetricStreamRequestType& req,
          ListMetricStreamResponseType* resp,
          AliCmsErrorInfo* error_info);

  int ListProject(const ListProjectRequestType& req,
          ListProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int ListSqlMetrics(const ListSqlMetricsRequestType& req,
          ListSqlMetricsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int PutDimTableData(const PutDimTableDataRequestType& req,
          PutDimTableDataResponseType* resp,
          AliCmsErrorInfo* error_info);

  int QueryIncremental(const QueryIncrementalRequestType& req,
          QueryIncrementalResponseType* resp,
          AliCmsErrorInfo* error_info);

  int QueryListMetric(const QueryListMetricRequestType& req,
          QueryListMetricResponseType* resp,
          AliCmsErrorInfo* error_info);

  int QueryMetric(const QueryMetricRequestType& req,
          QueryMetricResponseType* resp,
          AliCmsErrorInfo* error_info);

  int QueryMetricTopN(const QueryMetricTopNRequestType& req,
          QueryMetricTopNResponseType* resp,
          AliCmsErrorInfo* error_info);

  int QueryStatistics(const QueryStatisticsRequestType& req,
          QueryStatisticsResponseType* resp,
          AliCmsErrorInfo* error_info);

  int StartProject(const StartProjectRequestType& req,
          StartProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int StatusProject(const StatusProjectRequestType& req,
          StatusProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int StopProject(const StopProjectRequestType& req,
          StopProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int UpdateDimTable(const UpdateDimTableRequestType& req,
          UpdateDimTableResponseType* resp,
          AliCmsErrorInfo* error_info);

  int UpdateMetricStream(const UpdateMetricStreamRequestType& req,
          UpdateMetricStreamResponseType* resp,
          AliCmsErrorInfo* error_info);

  int UpdateProject(const UpdateProjectRequestType& req,
          UpdateProjectResponseType* resp,
          AliCmsErrorInfo* error_info);

  int UpdateSqlMetrics(const UpdateSqlMetricsRequestType& req,
          UpdateSqlMetricsResponseType* resp,
          AliCmsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
