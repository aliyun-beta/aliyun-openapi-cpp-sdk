#ifndef ALI_CMSH
#define ALI_CMSH
#include <string>
#include "ali_cms_batch_create_metrics_types.h"
#include "ali_cms_batch_create_sql_metrics_types.h"
#include "ali_cms_batch_put_dim_table_data_types.h"
#include "ali_cms_batch_query_metric_types.h"
#include "ali_cms_create_dim_table_types.h"
#include "ali_cms_create_metrics_types.h"
#include "ali_cms_create_metric_stream_types.h"
#include "ali_cms_create_project_types.h"
#include "ali_cms_create_sq_lmetrics_types.h"
#include "ali_cms_delete_dim_table_types.h"
#include "ali_cms_delete_dim_table_data_types.h"
#include "ali_cms_delete_metrics_types.h"
#include "ali_cms_delete_metric_stream_types.h"
#include "ali_cms_delete_project_types.h"
#include "ali_cms_describe_metric_types.h"
#include "ali_cms_describe_metric_datum_types.h"
#include "ali_cms_describe_metric_list_types.h"
#include "ali_cms_get_dim_table_types.h"
#include "ali_cms_get_metrics_types.h"
#include "ali_cms_get_metrics_meta_types.h"
#include "ali_cms_get_metric_statistics_types.h"
#include "ali_cms_get_metric_stream_types.h"
#include "ali_cms_get_metric_stream_meta_types.h"
#include "ali_cms_get_metric_stream_status_types.h"
#include "ali_cms_get_project_types.h"
#include "ali_cms_get_sq_lmetrics_types.h"
#include "ali_cms_list_dim_table_types.h"
#include "ali_cms_list_dim_table_data_types.h"
#include "ali_cms_list_metrics_types.h"
#include "ali_cms_list_metrics_plan_types.h"
#include "ali_cms_list_metric_stream_types.h"
#include "ali_cms_list_project_types.h"
#include "ali_cms_list_sq_lmetrics_types.h"
#include "ali_cms_put_dim_table_data_types.h"
#include "ali_cms_query_incremental_types.h"
#include "ali_cms_query_list_metric_types.h"
#include "ali_cms_query_metric_types.h"
#include "ali_cms_query_metric_top_ntypes.h"
#include "ali_cms_query_statistics_types.h"
#include "ali_cms_start_metric_stream_types.h"
#include "ali_cms_start_project_types.h"
#include "ali_cms_status_project_types.h"
#include "ali_cms_stop_metric_stream_types.h"
#include "ali_cms_stop_project_types.h"
#include "ali_cms_update_dim_table_types.h"
#include "ali_cms_update_metrics_types.h"
#include "ali_cms_update_metric_stream_types.h"
#include "ali_cms_update_project_types.h"
#include "ali_cms_update_sq_lmetrics_types.h"
namespace aliyun {
struct CmsErrorInfo {
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
  version_("2015-08-01"),
  host_(host) {}
public:
  int BatchCreateMetrics(const CmsBatchCreateMetricsRequestType& req,
          CmsBatchCreateMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int BatchCreateSqlMetrics(const CmsBatchCreateSqlMetricsRequestType& req,
          CmsBatchCreateSqlMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int BatchPutDimTableData(const CmsBatchPutDimTableDataRequestType& req,
          CmsBatchPutDimTableDataResponseType* resp,
          CmsErrorInfo* error_info);

  int BatchQueryMetric(const CmsBatchQueryMetricRequestType& req,
          CmsBatchQueryMetricResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateDimTable(const CmsCreateDimTableRequestType& req,
          CmsCreateDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateMetrics(const CmsCreateMetricsRequestType& req,
          CmsCreateMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateMetricStream(const CmsCreateMetricStreamRequestType& req,
          CmsCreateMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateProject(const CmsCreateProjectRequestType& req,
          CmsCreateProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateSQLMetrics(const CmsCreateSQLMetricsRequestType& req,
          CmsCreateSQLMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int DeleteDimTable(const CmsDeleteDimTableRequestType& req,
          CmsDeleteDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int DeleteDimTableData(const CmsDeleteDimTableDataRequestType& req,
          CmsDeleteDimTableDataResponseType* resp,
          CmsErrorInfo* error_info);

  int DeleteMetrics(const CmsDeleteMetricsRequestType& req,
          CmsDeleteMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int DeleteMetricStream(const CmsDeleteMetricStreamRequestType& req,
          CmsDeleteMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int DeleteProject(const CmsDeleteProjectRequestType& req,
          CmsDeleteProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int DescribeMetric(const CmsDescribeMetricRequestType& req,
          CmsDescribeMetricResponseType* resp,
          CmsErrorInfo* error_info);

  int DescribeMetricDatum(const CmsDescribeMetricDatumRequestType& req,
          CmsDescribeMetricDatumResponseType* resp,
          CmsErrorInfo* error_info);

  int DescribeMetricList(const CmsDescribeMetricListRequestType& req,
          CmsDescribeMetricListResponseType* resp,
          CmsErrorInfo* error_info);

  int GetDimTable(const CmsGetDimTableRequestType& req,
          CmsGetDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int GetMetrics(const CmsGetMetricsRequestType& req,
          CmsGetMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int GetMetricsMeta(const CmsGetMetricsMetaRequestType& req,
          CmsGetMetricsMetaResponseType* resp,
          CmsErrorInfo* error_info);

  int GetMetricStatistics(const CmsGetMetricStatisticsRequestType& req,
          CmsGetMetricStatisticsResponseType* resp,
          CmsErrorInfo* error_info);

  int GetMetricStream(const CmsGetMetricStreamRequestType& req,
          CmsGetMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int GetMetricStreamMeta(const CmsGetMetricStreamMetaRequestType& req,
          CmsGetMetricStreamMetaResponseType* resp,
          CmsErrorInfo* error_info);

  int GetMetricStreamStatus(const CmsGetMetricStreamStatusRequestType& req,
          CmsGetMetricStreamStatusResponseType* resp,
          CmsErrorInfo* error_info);

  int GetProject(const CmsGetProjectRequestType& req,
          CmsGetProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int GetSQLMetrics(const CmsGetSQLMetricsRequestType& req,
          CmsGetSQLMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int ListDimTable(const CmsListDimTableRequestType& req,
          CmsListDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int ListDimTableData(const CmsListDimTableDataRequestType& req,
          CmsListDimTableDataResponseType* resp,
          CmsErrorInfo* error_info);

  int ListMetrics(const CmsListMetricsRequestType& req,
          CmsListMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int ListMetricsPlan(const CmsListMetricsPlanRequestType& req,
          CmsListMetricsPlanResponseType* resp,
          CmsErrorInfo* error_info);

  int ListMetricStream(const CmsListMetricStreamRequestType& req,
          CmsListMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int ListProject(const CmsListProjectRequestType& req,
          CmsListProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int ListSQLMetrics(const CmsListSQLMetricsRequestType& req,
          CmsListSQLMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int PutDimTableData(const CmsPutDimTableDataRequestType& req,
          CmsPutDimTableDataResponseType* resp,
          CmsErrorInfo* error_info);

  int QueryIncremental(const CmsQueryIncrementalRequestType& req,
          CmsQueryIncrementalResponseType* resp,
          CmsErrorInfo* error_info);

  int QueryListMetric(const CmsQueryListMetricRequestType& req,
          CmsQueryListMetricResponseType* resp,
          CmsErrorInfo* error_info);

  int QueryMetric(const CmsQueryMetricRequestType& req,
          CmsQueryMetricResponseType* resp,
          CmsErrorInfo* error_info);

  int QueryMetricTopN(const CmsQueryMetricTopNRequestType& req,
          CmsQueryMetricTopNResponseType* resp,
          CmsErrorInfo* error_info);

  int QueryStatistics(const CmsQueryStatisticsRequestType& req,
          CmsQueryStatisticsResponseType* resp,
          CmsErrorInfo* error_info);

  int StartMetricStream(const CmsStartMetricStreamRequestType& req,
          CmsStartMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int StartProject(const CmsStartProjectRequestType& req,
          CmsStartProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int StatusProject(const CmsStatusProjectRequestType& req,
          CmsStatusProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int StopMetricStream(const CmsStopMetricStreamRequestType& req,
          CmsStopMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int StopProject(const CmsStopProjectRequestType& req,
          CmsStopProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateDimTable(const CmsUpdateDimTableRequestType& req,
          CmsUpdateDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateMetrics(const CmsUpdateMetricsRequestType& req,
          CmsUpdateMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateMetricStream(const CmsUpdateMetricStreamRequestType& req,
          CmsUpdateMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateProject(const CmsUpdateProjectRequestType& req,
          CmsUpdateProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int updateSQLMetrics(const CmsupdateSQLMetricsRequestType& req,
          CmsupdateSQLMetricsResponseType* resp,
          CmsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
