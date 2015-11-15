#ifndef ALI_ONSH
#define ALI_ONSH
#include <string>
#include "ali_ons_ons_cloud_get_appkey_list_types.h"
#include "ali_ons_ons_cluster_list_types.h"
#include "ali_ons_ons_cluster_names_types.h"
#include "ali_ons_ons_consumer_accumulate_types.h"
#include "ali_ons_ons_consumer_get_connection_types.h"
#include "ali_ons_ons_consumer_reset_offset_types.h"
#include "ali_ons_ons_consumer_status_types.h"
#include "ali_ons_ons_consumer_time_span_types.h"
#include "ali_ons_ons_empower_create_types.h"
#include "ali_ons_ons_empower_delete_types.h"
#include "ali_ons_ons_empower_list_types.h"
#include "ali_ons_ons_message_get_by_key_types.h"
#include "ali_ons_ons_message_get_by_msg_id_types.h"
#include "ali_ons_ons_message_get_by_topic_types.h"
#include "ali_ons_ons_message_push_types.h"
#include "ali_ons_ons_message_send_types.h"
#include "ali_ons_ons_message_trace_types.h"
#include "ali_ons_ons_publish_create_types.h"
#include "ali_ons_ons_publish_delete_types.h"
#include "ali_ons_ons_publish_get_types.h"
#include "ali_ons_ons_publish_list_types.h"
#include "ali_ons_ons_publish_search_types.h"
#include "ali_ons_ons_region_list_types.h"
#include "ali_ons_ons_subscription_create_types.h"
#include "ali_ons_ons_subscription_delete_types.h"
#include "ali_ons_ons_subscription_get_types.h"
#include "ali_ons_ons_subscription_list_types.h"
#include "ali_ons_ons_subscription_search_types.h"
#include "ali_ons_ons_topic_create_types.h"
#include "ali_ons_ons_topic_delete_types.h"
#include "ali_ons_ons_topic_get_types.h"
#include "ali_ons_ons_topic_list_types.h"
#include "ali_ons_ons_topic_search_types.h"
#include "ali_ons_ons_topic_status_types.h"
#include "ali_ons_ons_trend_cluster_input_tps_types.h"
#include "ali_ons_ons_trend_cluster_output_tps_types.h"
#include "ali_ons_ons_trend_get_machine_sar_types.h"
#include "ali_ons_ons_trend_group_output_tps_types.h"
#include "ali_ons_ons_trend_topic_input_tps_types.h"
#include "ali_ons_ons_warn_admin_types.h"
#include "ali_ons_ons_warn_create_types.h"
#include "ali_ons_ons_warn_delete_types.h"
#include "ali_ons_ons_warn_disable_types.h"
#include "ali_ons_ons_warn_editor_types.h"
#include "ali_ons_ons_warn_enable_types.h"
#include "ali_ons_ons_warn_list_types.h"
namespace aliyun {
struct OnsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ons {
public:
  static Ons* CreateOnsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ons(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-10-20"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int OnsCloudGetAppkeyList(const OnsOnsCloudGetAppkeyListRequestType& req,
          OnsOnsCloudGetAppkeyListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsClusterList(const OnsOnsClusterListRequestType& req,
          OnsOnsClusterListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsClusterNames(const OnsOnsClusterNamesRequestType& req,
          OnsOnsClusterNamesResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsConsumerAccumulate(const OnsOnsConsumerAccumulateRequestType& req,
          OnsOnsConsumerAccumulateResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsConsumerGetConnection(const OnsOnsConsumerGetConnectionRequestType& req,
          OnsOnsConsumerGetConnectionResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsConsumerResetOffset(const OnsOnsConsumerResetOffsetRequestType& req,
          OnsOnsConsumerResetOffsetResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsConsumerStatus(const OnsOnsConsumerStatusRequestType& req,
          OnsOnsConsumerStatusResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsConsumerTimeSpan(const OnsOnsConsumerTimeSpanRequestType& req,
          OnsOnsConsumerTimeSpanResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsEmpowerCreate(const OnsOnsEmpowerCreateRequestType& req,
          OnsOnsEmpowerCreateResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsEmpowerDelete(const OnsOnsEmpowerDeleteRequestType& req,
          OnsOnsEmpowerDeleteResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsEmpowerList(const OnsOnsEmpowerListRequestType& req,
          OnsOnsEmpowerListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsMessageGetByKey(const OnsOnsMessageGetByKeyRequestType& req,
          OnsOnsMessageGetByKeyResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsMessageGetByMsgId(const OnsOnsMessageGetByMsgIdRequestType& req,
          OnsOnsMessageGetByMsgIdResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsMessageGetByTopic(const OnsOnsMessageGetByTopicRequestType& req,
          OnsOnsMessageGetByTopicResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsMessagePush(const OnsOnsMessagePushRequestType& req,
          OnsOnsMessagePushResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsMessageSend(const OnsOnsMessageSendRequestType& req,
          OnsOnsMessageSendResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsMessageTrace(const OnsOnsMessageTraceRequestType& req,
          OnsOnsMessageTraceResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsPublishCreate(const OnsOnsPublishCreateRequestType& req,
          OnsOnsPublishCreateResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsPublishDelete(const OnsOnsPublishDeleteRequestType& req,
          OnsOnsPublishDeleteResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsPublishGet(const OnsOnsPublishGetRequestType& req,
          OnsOnsPublishGetResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsPublishList(const OnsOnsPublishListRequestType& req,
          OnsOnsPublishListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsPublishSearch(const OnsOnsPublishSearchRequestType& req,
          OnsOnsPublishSearchResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsRegionList(const OnsOnsRegionListRequestType& req,
          OnsOnsRegionListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsSubscriptionCreate(const OnsOnsSubscriptionCreateRequestType& req,
          OnsOnsSubscriptionCreateResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsSubscriptionDelete(const OnsOnsSubscriptionDeleteRequestType& req,
          OnsOnsSubscriptionDeleteResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsSubscriptionGet(const OnsOnsSubscriptionGetRequestType& req,
          OnsOnsSubscriptionGetResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsSubscriptionList(const OnsOnsSubscriptionListRequestType& req,
          OnsOnsSubscriptionListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsSubscriptionSearch(const OnsOnsSubscriptionSearchRequestType& req,
          OnsOnsSubscriptionSearchResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTopicCreate(const OnsOnsTopicCreateRequestType& req,
          OnsOnsTopicCreateResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTopicDelete(const OnsOnsTopicDeleteRequestType& req,
          OnsOnsTopicDeleteResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTopicGet(const OnsOnsTopicGetRequestType& req,
          OnsOnsTopicGetResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTopicList(const OnsOnsTopicListRequestType& req,
          OnsOnsTopicListResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTopicSearch(const OnsOnsTopicSearchRequestType& req,
          OnsOnsTopicSearchResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTopicStatus(const OnsOnsTopicStatusRequestType& req,
          OnsOnsTopicStatusResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTrendClusterInputTps(const OnsOnsTrendClusterInputTpsRequestType& req,
          OnsOnsTrendClusterInputTpsResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTrendClusterOutputTps(const OnsOnsTrendClusterOutputTpsRequestType& req,
          OnsOnsTrendClusterOutputTpsResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTrendGetMachineSar(const OnsOnsTrendGetMachineSarRequestType& req,
          OnsOnsTrendGetMachineSarResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTrendGroupOutputTps(const OnsOnsTrendGroupOutputTpsRequestType& req,
          OnsOnsTrendGroupOutputTpsResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsTrendTopicInputTps(const OnsOnsTrendTopicInputTpsRequestType& req,
          OnsOnsTrendTopicInputTpsResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnAdmin(const OnsOnsWarnAdminRequestType& req,
          OnsOnsWarnAdminResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnCreate(const OnsOnsWarnCreateRequestType& req,
          OnsOnsWarnCreateResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnDelete(const OnsOnsWarnDeleteRequestType& req,
          OnsOnsWarnDeleteResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnDisable(const OnsOnsWarnDisableRequestType& req,
          OnsOnsWarnDisableResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnEditor(const OnsOnsWarnEditorRequestType& req,
          OnsOnsWarnEditorResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnEnable(const OnsOnsWarnEnableRequestType& req,
          OnsOnsWarnEnableResponseType* resp,
          OnsErrorInfo* error_info);

  int OnsWarnList(const OnsOnsWarnListRequestType& req,
          OnsOnsWarnListResponseType* resp,
          OnsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
