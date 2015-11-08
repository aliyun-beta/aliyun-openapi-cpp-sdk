#ifndef ALI_ONSH
#define ALI_ONSH
#include <string>
#include "ali_ons_cloud_get_appkey_list_types.h"
#include "ali_ons_cluster_list_types.h"
#include "ali_ons_cluster_names_types.h"
#include "ali_ons_consumer_accumulate_types.h"
#include "ali_ons_consumer_get_connection_types.h"
#include "ali_ons_consumer_reset_offset_types.h"
#include "ali_ons_consumer_status_types.h"
#include "ali_ons_consumer_time_span_types.h"
#include "ali_ons_empower_create_types.h"
#include "ali_ons_empower_delete_types.h"
#include "ali_ons_empower_list_types.h"
#include "ali_ons_message_get_by_key_types.h"
#include "ali_ons_message_get_by_msg_id_types.h"
#include "ali_ons_message_get_by_topic_types.h"
#include "ali_ons_message_push_types.h"
#include "ali_ons_message_send_types.h"
#include "ali_ons_message_trace_types.h"
#include "ali_ons_publish_create_types.h"
#include "ali_ons_publish_delete_types.h"
#include "ali_ons_publish_get_types.h"
#include "ali_ons_publish_list_types.h"
#include "ali_ons_publish_search_types.h"
#include "ali_ons_region_list_types.h"
#include "ali_ons_subscription_create_types.h"
#include "ali_ons_subscription_delete_types.h"
#include "ali_ons_subscription_get_types.h"
#include "ali_ons_subscription_list_types.h"
#include "ali_ons_subscription_search_types.h"
#include "ali_ons_topic_create_types.h"
#include "ali_ons_topic_delete_types.h"
#include "ali_ons_topic_get_types.h"
#include "ali_ons_topic_list_types.h"
#include "ali_ons_topic_search_types.h"
#include "ali_ons_topic_status_types.h"
#include "ali_ons_trend_cluster_input_tps_types.h"
#include "ali_ons_trend_cluster_output_tps_types.h"
#include "ali_ons_trend_get_machine_sar_types.h"
#include "ali_ons_trend_group_output_tps_types.h"
#include "ali_ons_trend_topic_input_tps_types.h"
#include "ali_ons_warn_admin_types.h"
#include "ali_ons_warn_create_types.h"
#include "ali_ons_warn_delete_types.h"
#include "ali_ons_warn_disable_types.h"
#include "ali_ons_warn_editor_types.h"
#include "ali_ons_warn_enable_types.h"
#include "ali_ons_warn_list_types.h"
namespace aliyun {
struct AliOnsErrorInfo {
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
  host_(host) {}
public:
  int OnsCloudGetAppkeyList(const OnsCloudGetAppkeyListRequestType& req,
          OnsCloudGetAppkeyListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsClusterList(const OnsClusterListRequestType& req,
          OnsClusterListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsClusterNames(const OnsClusterNamesRequestType& req,
          OnsClusterNamesResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsConsumerAccumulate(const OnsConsumerAccumulateRequestType& req,
          OnsConsumerAccumulateResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsConsumerGetConnection(const OnsConsumerGetConnectionRequestType& req,
          OnsConsumerGetConnectionResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsConsumerResetOffset(const OnsConsumerResetOffsetRequestType& req,
          OnsConsumerResetOffsetResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsConsumerStatus(const OnsConsumerStatusRequestType& req,
          OnsConsumerStatusResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsConsumerTimeSpan(const OnsConsumerTimeSpanRequestType& req,
          OnsConsumerTimeSpanResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsEmpowerCreate(const OnsEmpowerCreateRequestType& req,
          OnsEmpowerCreateResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsEmpowerDelete(const OnsEmpowerDeleteRequestType& req,
          OnsEmpowerDeleteResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsEmpowerList(const OnsEmpowerListRequestType& req,
          OnsEmpowerListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsMessageGetByKey(const OnsMessageGetByKeyRequestType& req,
          OnsMessageGetByKeyResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsMessageGetByMsgId(const OnsMessageGetByMsgIdRequestType& req,
          OnsMessageGetByMsgIdResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsMessageGetByTopic(const OnsMessageGetByTopicRequestType& req,
          OnsMessageGetByTopicResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsMessagePush(const OnsMessagePushRequestType& req,
          OnsMessagePushResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsMessageSend(const OnsMessageSendRequestType& req,
          OnsMessageSendResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsMessageTrace(const OnsMessageTraceRequestType& req,
          OnsMessageTraceResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsPublishCreate(const OnsPublishCreateRequestType& req,
          OnsPublishCreateResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsPublishDelete(const OnsPublishDeleteRequestType& req,
          OnsPublishDeleteResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsPublishGet(const OnsPublishGetRequestType& req,
          OnsPublishGetResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsPublishList(const OnsPublishListRequestType& req,
          OnsPublishListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsPublishSearch(const OnsPublishSearchRequestType& req,
          OnsPublishSearchResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsRegionList(const OnsRegionListRequestType& req,
          OnsRegionListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsSubscriptionCreate(const OnsSubscriptionCreateRequestType& req,
          OnsSubscriptionCreateResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsSubscriptionDelete(const OnsSubscriptionDeleteRequestType& req,
          OnsSubscriptionDeleteResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsSubscriptionGet(const OnsSubscriptionGetRequestType& req,
          OnsSubscriptionGetResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsSubscriptionList(const OnsSubscriptionListRequestType& req,
          OnsSubscriptionListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsSubscriptionSearch(const OnsSubscriptionSearchRequestType& req,
          OnsSubscriptionSearchResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTopicCreate(const OnsTopicCreateRequestType& req,
          OnsTopicCreateResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTopicDelete(const OnsTopicDeleteRequestType& req,
          OnsTopicDeleteResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTopicGet(const OnsTopicGetRequestType& req,
          OnsTopicGetResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTopicList(const OnsTopicListRequestType& req,
          OnsTopicListResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTopicSearch(const OnsTopicSearchRequestType& req,
          OnsTopicSearchResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTopicStatus(const OnsTopicStatusRequestType& req,
          OnsTopicStatusResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTrendClusterInputTps(const OnsTrendClusterInputTpsRequestType& req,
          OnsTrendClusterInputTpsResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTrendClusterOutputTps(const OnsTrendClusterOutputTpsRequestType& req,
          OnsTrendClusterOutputTpsResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTrendGetMachineSar(const OnsTrendGetMachineSarRequestType& req,
          OnsTrendGetMachineSarResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTrendGroupOutputTps(const OnsTrendGroupOutputTpsRequestType& req,
          OnsTrendGroupOutputTpsResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsTrendTopicInputTps(const OnsTrendTopicInputTpsRequestType& req,
          OnsTrendTopicInputTpsResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnAdmin(const OnsWarnAdminRequestType& req,
          OnsWarnAdminResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnCreate(const OnsWarnCreateRequestType& req,
          OnsWarnCreateResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnDelete(const OnsWarnDeleteRequestType& req,
          OnsWarnDeleteResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnDisable(const OnsWarnDisableRequestType& req,
          OnsWarnDisableResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnEditor(const OnsWarnEditorRequestType& req,
          OnsWarnEditorResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnEnable(const OnsWarnEnableRequestType& req,
          OnsWarnEnableResponseType* resp,
          AliOnsErrorInfo* error_info);

  int OnsWarnList(const OnsWarnListRequestType& req,
          OnsWarnListResponseType* resp,
          AliOnsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
