#ifndef ALI_CMSH
#define ALI_CMSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_cms_batch_create_sql_metrics_types.h"
#include "ali_cms_batch_put_dim_table_data_types.h"
#include "ali_cms_batch_query_metric_types.h"
#include "ali_cms_create_dim_table_types.h"
#include "ali_cms_create_metric_stream_types.h"
#include "ali_cms_create_project_types.h"
#include "ali_cms_create_sql_metrics_types.h"
#include "ali_cms_delete_dim_table_types.h"
#include "ali_cms_delete_dim_table_data_types.h"
#include "ali_cms_delete_metrics_types.h"
#include "ali_cms_delete_metric_stream_types.h"
#include "ali_cms_delete_project_types.h"
#include "ali_cms_describe_metric_types.h"
#include "ali_cms_describe_metric_datum_types.h"
#include "ali_cms_get_dim_table_types.h"
#include "ali_cms_get_metrics_meta_types.h"
#include "ali_cms_get_metric_statistics_types.h"
#include "ali_cms_get_metric_stream_types.h"
#include "ali_cms_get_project_types.h"
#include "ali_cms_get_sql_metrics_types.h"
#include "ali_cms_list_dim_table_types.h"
#include "ali_cms_list_metric_stream_types.h"
#include "ali_cms_list_project_types.h"
#include "ali_cms_list_sql_metrics_types.h"
#include "ali_cms_put_dim_table_data_types.h"
#include "ali_cms_query_incremental_types.h"
#include "ali_cms_query_list_metric_types.h"
#include "ali_cms_query_metric_types.h"
#include "ali_cms_query_metric_top_ntypes.h"
#include "ali_cms_query_statistics_types.h"
#include "ali_cms_start_project_types.h"
#include "ali_cms_status_project_types.h"
#include "ali_cms_stop_project_types.h"
#include "ali_cms_update_dim_table_types.h"
#include "ali_cms_update_metric_stream_types.h"
#include "ali_cms_update_project_types.h"
#include "ali_cms_update_sql_metrics_types.h"
#ifdef WIN32
 #ifdef aliyun_api_cms_2015_10_20_EXPORTS
 #define ALIYUN_API_CMS_2015_10_20_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_CMS_2015_10_20_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_CMS_2015_10_20_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct CmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_CMS_2015_10_20_DLL_EXPORT_IMPORT Cms {
public:
  static Cms* CreateCmsClient(std::string endpoint, std::string appid, std::string secret);
  ~Cms();
private:
  Cms(std::string host, std::string appid, std::string secret);
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetProxyHost(std::string proxy_host) {
    if(this->proxy_host_) {
      free(this->proxy_host_);
    }
    this->proxy_host_ = strdup(proxy_host.c_str());
  }
  std::string GetProxyHost() {  return this->proxy_host_;  }
  void SetRegionId(std::string region_id) {
    if(this->region_id_) {
      free(this->region_id_);
    }
    this->region_id_ = strdup(region_id.c_str());
  }
  std::string GetRegionId() {  return this->region_id_;  }
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

  int CreateMetricStream(const CmsCreateMetricStreamRequestType& req,
          CmsCreateMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateProject(const CmsCreateProjectRequestType& req,
          CmsCreateProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int CreateSqlMetrics(const CmsCreateSqlMetricsRequestType& req,
          CmsCreateSqlMetricsResponseType* resp,
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

  int GetDimTable(const CmsGetDimTableRequestType& req,
          CmsGetDimTableResponseType* resp,
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

  int GetProject(const CmsGetProjectRequestType& req,
          CmsGetProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int GetSqlMetrics(const CmsGetSqlMetricsRequestType& req,
          CmsGetSqlMetricsResponseType* resp,
          CmsErrorInfo* error_info);

  int ListDimTable(const CmsListDimTableRequestType& req,
          CmsListDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int ListMetricStream(const CmsListMetricStreamRequestType& req,
          CmsListMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int ListProject(const CmsListProjectRequestType& req,
          CmsListProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int ListSqlMetrics(const CmsListSqlMetricsRequestType& req,
          CmsListSqlMetricsResponseType* resp,
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

  int StartProject(const CmsStartProjectRequestType& req,
          CmsStartProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int StatusProject(const CmsStatusProjectRequestType& req,
          CmsStatusProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int StopProject(const CmsStopProjectRequestType& req,
          CmsStopProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateDimTable(const CmsUpdateDimTableRequestType& req,
          CmsUpdateDimTableResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateMetricStream(const CmsUpdateMetricStreamRequestType& req,
          CmsUpdateMetricStreamResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateProject(const CmsUpdateProjectRequestType& req,
          CmsUpdateProjectResponseType* resp,
          CmsErrorInfo* error_info);

  int UpdateSqlMetrics(const CmsUpdateSqlMetricsRequestType& req,
          CmsUpdateSqlMetricsResponseType* resp,
          CmsErrorInfo* error_info);

private:
  char* appid_;
  char* secret_;
  char* version_;
  char* host_;
  char* proxy_host_;
  bool support_tls_;
  bool use_tls_;
  char* region_id_;
};  //end class
} // end namespace
#endif
