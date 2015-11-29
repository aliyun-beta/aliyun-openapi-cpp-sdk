#include "ali_ons.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_ons_cloud_get_appkey_list_response = "{"
"  \"Data\": {"
"    \"AppStatus\": 0,"
"    \"Appkey\": \"Appkey\","
"    \"Description\": \"Description\","
"    \"IsvId\": 0,"
"    \"SupportEmail\": \"SupportEmail\","
"    \"Title\": \"Title\","
"    \"Wangwang\": \"Wangwang\""
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_cloud_get_appkey_list() {
  OnsOnsCloudGetAppkeyListRequestType req;
  OnsOnsCloudGetAppkeyListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_cloud_get_appkey_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.isv_id = "IsvId";
  int ret = ons->OnsCloudGetAppkeyList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_cluster_list_response = "{"
"  \"Data\": {"
"    \"ClusterInfoDataDo\": ["
"      {"
"        \"BrokerInfoList\": {"
"          \"BrokerInfoDataDo\": ["
"            {"
"              \"ClusterName\": \"ClusterName\","
"              \"BrokerName\": \"BrokerName\","
"              \"BrokerId\": 0,"
"              \"BrokerAddr\": \"BrokerAddr\","
"              \"BrokerIp\": \"BrokerIp\","
"              \"Version\": \"Version\","
"              \"InTPS\": 0,"
"              \"OutTPS\": 0,"
"              \"InTotalYest\": 0,"
"              \"OutTotalYest\": 0,"
"              \"InTotalToday\": 0,"
"              \"OutTotalToday\": 0"
"            }"
"          ]"
"        },"
"        \"ClusterName\": \"ClusterName\""
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_cluster_list() {
  OnsOnsClusterListRequestType req;
  OnsOnsClusterListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_cluster_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.cluster = "Cluster";
  int ret = ons->OnsClusterList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_cluster_names_response = "{"
"  \"Data\": {"
"    \"ClusterName\": ["
"      \"ClusterName\""
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_cluster_names() {
  OnsOnsClusterNamesRequestType req;
  OnsOnsClusterNamesResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_cluster_names_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  int ret = ons->OnsClusterNames(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_consumer_accumulate_response = "{"
"  \"Data\": {"
"    \"DetailInTopicList\": {"
"      \"DetailInTopicDo\": ["
"        {"
"          \"OffsetList\": {"
"            \"ConsumeQueueOffset\": ["
"              {"
"                \"Topic\": \"Topic\","
"                \"BrokerName\": \"BrokerName\","
"                \"QueueId\": 0,"
"                \"BrokerOffset\": 0,"
"                \"ConsumerOffset\": 0,"
"                \"LastTimestamp\": 0"
"              }"
"            ]"
"          },"
"          \"Topic\": \"Topic\","
"          \"ConsumeTps\": 0,"
"          \"LastTimestamp\": 0,"
"          \"DelayTime\": 0"
"        }"
"      ]"
"    },"
"    \"Online\": true,"
"    \"TotalDiff\": 0,"
"    \"ConsumeTps\": 0,"
"    \"LastTimestamp\": 0,"
"    \"DelayTime\": 0"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_consumer_accumulate() {
  OnsOnsConsumerAccumulateRequestType req;
  OnsOnsConsumerAccumulateResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_consumer_accumulate_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.detail = "Detail";
  int ret = ons->OnsConsumerAccumulate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_consumer_get_connection_response = "{"
"  \"Data\": {"
"    \"ConnectionList\": {"
"      \"ConnectionDo\": ["
"        {"
"          \"ClientId\": \"ClientId\","
"          \"ClientAddr\": \"ClientAddr\","
"          \"Language\": \"Language\","
"          \"Version\": \"Version\""
"        }"
"      ]"
"    }"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_consumer_get_connection() {
  OnsOnsConsumerGetConnectionRequestType req;
  OnsOnsConsumerGetConnectionResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_consumer_get_connection_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  int ret = ons->OnsConsumerGetConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_consumer_reset_offset_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_consumer_reset_offset() {
  OnsOnsConsumerResetOffsetRequestType req;
  OnsOnsConsumerResetOffsetResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_consumer_reset_offset_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  req.reset_timestamp = "ResetTimestamp";
  int ret = ons->OnsConsumerResetOffset(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_consumer_status_response = "{"
"  \"Data\": {"
"    \"ConnectionSet\": {"
"      \"ConnectionDo\": ["
"        {"
"          \"ClientId\": \"ClientId\","
"          \"ClientAddr\": \"ClientAddr\","
"          \"Language\": \"Language\","
"          \"Version\": \"Version\""
"        }"
"      ]"
"    },"
"    \"DetailInTopicList\": {"
"      \"DetailInTopicDo\": ["
"        {"
"          \"OffsetList\": {"
"            \"ConsumeQueueOffset\": ["
"              {"
"                \"Topic\": \"Topic\","
"                \"BrokerName\": \"BrokerName\","
"                \"QueueId\": 0,"
"                \"BrokerOffset\": 0,"
"                \"ConsumerOffset\": 0,"
"                \"LastTimestamp\": 0"
"              }"
"            ]"
"          },"
"          \"Topic\": \"Topic\","
"          \"ConsumeTps\": 0,"
"          \"LastTimestamp\": 0,"
"          \"DelayTime\": 0"
"        }"
"      ]"
"    },"
"    \"ConsumerConnectionInfoList\": {"
"      \"ConsumerConnectionInfoDo\": ["
"        {"
"          \"SubscriptionSet\": {"
"            \"SubscriptionData\": ["
"              {"
"                \"TagsSet\": {"
"                  \"Tag\": ["
"                    \"Tag\""
"                  ]"
"                },"
"                \"CodeSet\": {"
"                  \"Code\": ["
"                    \"Code\""
"                  ]"
"                },"
"                \"ClassFilterMode\": true,"
"                \"Topic\": \"Topic\","
"                \"SubString\": \"SubString\","
"                \"SubVersion\": 0"
"              }"
"            ]"
"          },"
"          \"RunningDataList\": {"
"            \"ConsumerRunningDataDo\": ["
"              {"
"                \"ConsumerId\": \"ConsumerId\","
"                \"Topic\": \"Topic\","
"                \"Rt\": 0,"
"                \"OkTps\": 0,"
"                \"FailedTps\": 0,"
"                \"FailedCountPerHour\": 0"
"              }"
"            ]"
"          },"
"          \"Jstack\": {"
"            \"ThreadTrackDo\": ["
"              {"
"                \"TrackList\": {"
"                  \"Track\": ["
"                    \"Track\""
"                  ]"
"                },"
"                \"Thread\": \"Thread\""
"              }"
"            ]"
"          },"
"          \"ProcessQueueInfoDoList\": {"
"            \"ProcessQueueInfoDo\": ["
"              {"
"                \"WarnMap\": {"
"                  \"LOCK\": \"LOCK\","
"                  \"UNLOCK\": \"UNLOCK\","
"                  \"BLOCK\": \"BLOCK\""
"                },"
"                \"topic\": \"topic\","
"                \"BrokerName\": \"BrokerName\","
"                \"QueueId\": 0"
"              }"
"            ]"
"          },"
"          \"InstanceId\": \"InstanceId\","
"          \"Connection\": \"Connection\","
"          \"Language\": \"Language\","
"          \"Version\": \"Version\","
"          \"ConsumeModel\": \"ConsumeModel\","
"          \"ConsumeType\": \"ConsumeType\","
"          \"ThreadCount\": 0,"
"          \"StartTimeStamp\": 0,"
"          \"LastTimeStamp\": 0"
"        }"
"      ]"
"    },"
"    \"Online\": true,"
"    \"TotalDiff\": 0,"
"    \"ConsumeTps\": 0,"
"    \"LastTimestamp\": 0,"
"    \"DelayTime\": 0,"
"    \"ConsumeModel\": \"ConsumeModel\","
"    \"SubscriptionSame\": true,"
"    \"RebalanceOK\": true"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_consumer_status() {
  OnsOnsConsumerStatusRequestType req;
  OnsOnsConsumerStatusResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_consumer_status_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.detail = "Detail";
  req.need_jstack = "NeedJstack";
  int ret = ons->OnsConsumerStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_consumer_time_span_response = "{"
"  \"Data\": {"
"    \"QueueTimeSpans\": {"
"      \"QueueTimeSpan\": ["
"        {"
"          \"MessageQueue\": {"
"            \"Topic\": \"Topic\","
"            \"BrokerName\": \"BrokerName\","
"            \"QueueId\": 0"
"          },"
"          \"MinTimeStamp\": 0,"
"          \"MaxTimeStamp\": 0,"
"          \"ConsumeTimeStamp\": 0"
"        }"
"      ]"
"    },"
"    \"Topic\": \"Topic\","
"    \"MinTimeStamp\": 0,"
"    \"MaxTimeStamp\": 0,"
"    \"ConsumeTimeStamp\": 0"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_consumer_time_span() {
  OnsOnsConsumerTimeSpanRequestType req;
  OnsOnsConsumerTimeSpanResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_consumer_time_span_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsConsumerTimeSpan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_empower_create_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_empower_create() {
  OnsOnsEmpowerCreateRequestType req;
  OnsOnsEmpowerCreateResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_empower_create_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.empower_user = "EmpowerUser";
  req.topic = "Topic";
  req.relation = "Relation";
  int ret = ons->OnsEmpowerCreate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_empower_delete_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_empower_delete() {
  OnsOnsEmpowerDeleteRequestType req;
  OnsOnsEmpowerDeleteResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_empower_delete_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.empower_user = "EmpowerUser";
  req.topic = "Topic";
  int ret = ons->OnsEmpowerDelete(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_empower_list_response = "{"
"  \"Data\": {"
"    \"AuthOwnerInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"Topic\": \"Topic\","
"        \"Owner\": 0,"
"        \"Relation\": 0,"
"        \"RelationName\": \"RelationName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_empower_list() {
  OnsOnsEmpowerListRequestType req;
  OnsOnsEmpowerListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_empower_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.empower_user = "EmpowerUser";
  req.topic = "Topic";
  int ret = ons->OnsEmpowerList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_message_get_by_key_response = "{"
"  \"Data\": {"
"    \"OnsRestMessageDo\": ["
"      {"
"        \"PropertyList\": {"
"          \"MessageProperty\": ["
"            {"
"              \"Name\": \"Name\","
"              \"Value\": \"Value\""
"            }"
"          ]"
"        },"
"        \"Topic\": \"Topic\","
"        \"Flag\": 0,"
"        \"Body\": \"Body\","
"        \"QueueId\": 0,"
"        \"StoreSize\": 0,"
"        \"QueueOffset\": 0,"
"        \"SysFlag\": 0,"
"        \"BornTimestamp\": 0,"
"        \"BornHost\": \"BornHost\","
"        \"StoreTimestamp\": 0,"
"        \"StoreHost\": \"StoreHost\","
"        \"MsgId\": \"MsgId\","
"        \"CommitLogOffset\": 0,"
"        \"BodyCRC\": 0,"
"        \"ReconsumeTimes\": 0,"
"        \"PreparedTransactionOffset\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_message_get_by_key() {
  OnsOnsMessageGetByKeyRequestType req;
  OnsOnsMessageGetByKeyResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_message_get_by_key_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  req.key = "Key";
  int ret = ons->OnsMessageGetByKey(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_message_get_by_msg_id_response = "{"
"  \"Data\": {"
"    \"PropertyList\": {"
"      \"MessageProperty\": ["
"        {"
"          \"Name\": \"Name\","
"          \"Value\": \"Value\""
"        }"
"      ]"
"    },"
"    \"Topic\": \"Topic\","
"    \"Flag\": 0,"
"    \"Body\": \"Body\","
"    \"QueueId\": 0,"
"    \"StoreSize\": 0,"
"    \"QueueOffset\": 0,"
"    \"SysFlag\": 0,"
"    \"BornTimestamp\": 0,"
"    \"BornHost\": \"BornHost\","
"    \"StoreTimestamp\": 0,"
"    \"StoreHost\": \"StoreHost\","
"    \"MsgId\": \"MsgId\","
"    \"CommitLogOffset\": 0,"
"    \"BodyCRC\": 0,"
"    \"ReconsumeTimes\": 0,"
"    \"PreparedTransactionOffset\": 0"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_message_get_by_msg_id() {
  OnsOnsMessageGetByMsgIdRequestType req;
  OnsOnsMessageGetByMsgIdResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_message_get_by_msg_id_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.msg_id = "MsgId";
  int ret = ons->OnsMessageGetByMsgId(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_message_get_by_topic_response = "{"
"  \"Data\": {"
"    \"OnsRestMessageDo\": ["
"      {"
"        \"PropertyList\": {"
"          \"MessageProperty\": ["
"            {"
"              \"Name\": \"Name\","
"              \"Value\": \"Value\""
"            }"
"          ]"
"        },"
"        \"Topic\": \"Topic\","
"        \"Flag\": 0,"
"        \"Body\": \"Body\","
"        \"QueueId\": 0,"
"        \"StoreSize\": 0,"
"        \"QueueOffset\": 0,"
"        \"SysFlag\": 0,"
"        \"BornTimestamp\": 0,"
"        \"BornHost\": \"BornHost\","
"        \"StoreTimestamp\": 0,"
"        \"StoreHost\": \"StoreHost\","
"        \"MsgId\": \"MsgId\","
"        \"CommitLogOffset\": 0,"
"        \"BodyCRC\": 0,"
"        \"ReconsumeTimes\": 0,"
"        \"PreparedTransactionOffset\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_message_get_by_topic() {
  OnsOnsMessageGetByTopicRequestType req;
  OnsOnsMessageGetByTopicResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_message_get_by_topic_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  int ret = ons->OnsMessageGetByTopic(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_message_push_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_message_push() {
  OnsOnsMessagePushRequestType req;
  OnsOnsMessagePushResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_message_push_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.client_id = "ClientId";
  req.msg_id = "MsgId";
  req.topic = "Topic";
  int ret = ons->OnsMessagePush(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_message_send_response = "{"
"  \"HelpUrl\": \"HelpUrl\","
"  \"Data\": \"Data\""
"}";
static int test_ons_message_send() {
  OnsOnsMessageSendRequestType req;
  OnsOnsMessageSendResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_message_send_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.producer_id = "ProducerId";
  req.topic = "Topic";
  req.tag = "Tag";
  req.key = "Key";
  req.message = "Message";
  int ret = ons->OnsMessageSend(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_message_trace_response = "{"
"  \"Data\": {"
"    \"MessageTrack\": ["
"      {"
"        \"ConsumerGroup\": \"ConsumerGroup\","
"        \"TrackType\": \"TrackType\","
"        \"ExceptionDesc\": \"ExceptionDesc\""
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_message_trace() {
  OnsOnsMessageTraceRequestType req;
  OnsOnsMessageTraceResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_message_trace_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  req.msg_id = "MsgId";
  int ret = ons->OnsMessageTrace(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_publish_create_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_publish_create() {
  OnsOnsPublishCreateRequestType req;
  OnsOnsPublishCreateResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_publish_create_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.producer_id = "ProducerId";
  req.topic = "Topic";
  req.app_name = "AppName";
  int ret = ons->OnsPublishCreate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_publish_delete_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_publish_delete() {
  OnsOnsPublishDeleteRequestType req;
  OnsOnsPublishDeleteResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_publish_delete_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.producer_id = "ProducerId";
  req.topic = "Topic";
  int ret = ons->OnsPublishDelete(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_publish_get_response = "{"
"  \"Data\": {"
"    \"PublishInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Owner\": \"Owner\","
"        \"ProducerId\": \"ProducerId\","
"        \"Topic\": \"Topic\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_publish_get() {
  OnsOnsPublishGetRequestType req;
  OnsOnsPublishGetResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_publish_get_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.producer_id = "ProducerId";
  req.topic = "Topic";
  int ret = ons->OnsPublishGet(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_publish_list_response = "{"
"  \"Data\": {"
"    \"PublishInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Owner\": \"Owner\","
"        \"ProducerId\": \"ProducerId\","
"        \"Topic\": \"Topic\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_publish_list() {
  OnsOnsPublishListRequestType req;
  OnsOnsPublishListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_publish_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  int ret = ons->OnsPublishList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_publish_search_response = "{"
"  \"Data\": {"
"    \"PublishInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Owner\": \"Owner\","
"        \"ProducerId\": \"ProducerId\","
"        \"Topic\": \"Topic\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_publish_search() {
  OnsOnsPublishSearchRequestType req;
  OnsOnsPublishSearchResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_publish_search_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.search = "Search";
  int ret = ons->OnsPublishSearch(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_region_list_response = "{"
"  \"Data\": {"
"    \"RegionDo\": ["
"      {"
"        \"Id\": 0,"
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"Owner\": \"Owner\","
"        \"Cluster\": \"Cluster\","
"        \"Status\": 0,"
"        \"IsShare\": 0,"
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_region_list() {
  OnsOnsRegionListRequestType req;
  OnsOnsRegionListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_region_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  int ret = ons->OnsRegionList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_subscription_create_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_subscription_create() {
  OnsOnsSubscriptionCreateRequestType req;
  OnsOnsSubscriptionCreateResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_subscription_create_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsSubscriptionCreate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_subscription_delete_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_subscription_delete() {
  OnsOnsSubscriptionDeleteRequestType req;
  OnsOnsSubscriptionDeleteResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_subscription_delete_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsSubscriptionDelete(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_subscription_get_response = "{"
"  \"Data\": {"
"    \"SubscribeInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Owner\": \"Owner\","
"        \"ConsumerId\": \"ConsumerId\","
"        \"Topic\": \"Topic\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_subscription_get() {
  OnsOnsSubscriptionGetRequestType req;
  OnsOnsSubscriptionGetResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_subscription_get_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsSubscriptionGet(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_subscription_list_response = "{"
"  \"Data\": {"
"    \"SubscribeInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Owner\": \"Owner\","
"        \"ConsumerId\": \"ConsumerId\","
"        \"Topic\": \"Topic\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_subscription_list() {
  OnsOnsSubscriptionListRequestType req;
  OnsOnsSubscriptionListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_subscription_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  int ret = ons->OnsSubscriptionList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_subscription_search_response = "{"
"  \"Data\": {"
"    \"SubscribeInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Owner\": \"Owner\","
"        \"ConsumerId\": \"ConsumerId\","
"        \"Topic\": \"Topic\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_subscription_search() {
  OnsOnsSubscriptionSearchRequestType req;
  OnsOnsSubscriptionSearchResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_subscription_search_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.search = "Search";
  int ret = ons->OnsSubscriptionSearch(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_topic_create_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_topic_create() {
  OnsOnsTopicCreateRequestType req;
  OnsOnsTopicCreateResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_topic_create_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  req.cluster = "Cluster";
  req.queue_num = "QueueNum";
  req.order = "Order";
  req.qps = "Qps";
  req.status = "Status";
  req.remark = "Remark";
  req.appkey = "Appkey";
  req.app_name = "AppName";
  int ret = ons->OnsTopicCreate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_topic_delete_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_topic_delete() {
  OnsOnsTopicDeleteRequestType req;
  OnsOnsTopicDeleteResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_topic_delete_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  req.cluster = "Cluster";
  int ret = ons->OnsTopicDelete(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_topic_get_response = "{"
"  \"Data\": {"
"    \"PublishInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Topic\": \"Topic\","
"        \"Owner\": \"Owner\","
"        \"Relation\": 0,"
"        \"RelationName\": \"RelationName\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"Appkey\": 0,"
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0,"
"        \"Remark\": \"Remark\""
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_topic_get() {
  OnsOnsTopicGetRequestType req;
  OnsOnsTopicGetResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_topic_get_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  int ret = ons->OnsTopicGet(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_topic_list_response = "{"
"  \"Data\": {"
"    \"PublishInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Topic\": \"Topic\","
"        \"Owner\": \"Owner\","
"        \"Relation\": 0,"
"        \"RelationName\": \"RelationName\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"Appkey\": 0,"
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0,"
"        \"Remark\": \"Remark\""
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_topic_list() {
  OnsOnsTopicListRequestType req;
  OnsOnsTopicListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_topic_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  int ret = ons->OnsTopicList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_topic_search_response = "{"
"  \"Data\": {"
"    \"PublishInfoDo\": ["
"      {"
"        \"Id\": 0,"
"        \"ChannelId\": 0,"
"        \"ChannelName\": \"ChannelName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionName\": \"RegionName\","
"        \"Topic\": \"Topic\","
"        \"Owner\": \"Owner\","
"        \"Relation\": 0,"
"        \"RelationName\": \"RelationName\","
"        \"Status\": 0,"
"        \"StatusName\": \"StatusName\","
"        \"Appkey\": 0,"
"        \"CreateTime\": 0,"
"        \"UpdateTime\": 0,"
"        \"Remark\": \"Remark\""
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_topic_search() {
  OnsOnsTopicSearchRequestType req;
  OnsOnsTopicSearchResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_topic_search_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.search = "Search";
  int ret = ons->OnsTopicSearch(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_topic_status_response = "{"
"  \"Data\": {"
"    \"OffsetTable\": {"
"      \"TopicQueueOffset\": ["
"        {"
"          \"Topic\": \"Topic\","
"          \"BrokerName\": \"BrokerName\","
"          \"QueueId\": 0,"
"          \"MinOffset\": 0,"
"          \"MaxOffset\": 0,"
"          \"LastUpdateTimestamp\": 0"
"        }"
"      ]"
"    },"
"    \"TotalCount\": 0,"
"    \"LastTimeStamp\": 0"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_topic_status() {
  OnsOnsTopicStatusRequestType req;
  OnsOnsTopicStatusResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_topic_status_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  req.detail = "Detail";
  int ret = ons->OnsTopicStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_trend_cluster_input_tps_response = "{"
"  \"Data\": {"
"    \"Records\": {"
"      \"StatsDataDo\": ["
"        {"
"          \"X\": 0,"
"          \"Y\": 0"
"        }"
"      ]"
"    },"
"    \"Title\": \"Title\","
"    \"XUnit\": \"XUnit\","
"    \"YUnit\": \"YUnit\""
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_trend_cluster_input_tps() {
  OnsOnsTrendClusterInputTpsRequestType req;
  OnsOnsTrendClusterInputTpsResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_trend_cluster_input_tps_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.cluster = "Cluster";
  req.begin_time = "BeginTime";
  req.end_time = "EndTime";
  req.period = "Period";
  int ret = ons->OnsTrendClusterInputTps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_trend_cluster_output_tps_response = "{"
"  \"Data\": {"
"    \"Records\": {"
"      \"StatsDataDo\": ["
"        {"
"          \"X\": 0,"
"          \"Y\": 0"
"        }"
"      ]"
"    },"
"    \"Title\": \"Title\","
"    \"XUnit\": \"XUnit\","
"    \"YUnit\": \"YUnit\""
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_trend_cluster_output_tps() {
  OnsOnsTrendClusterOutputTpsRequestType req;
  OnsOnsTrendClusterOutputTpsResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_trend_cluster_output_tps_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.cluster = "Cluster";
  req.begin_time = "BeginTime";
  req.end_time = "EndTime";
  req.period = "Period";
  int ret = ons->OnsTrendClusterOutputTps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_trend_get_machine_sar_response = "{"
"  \"Data\": {"
"    \"Records\": {"
"      \"StatsDataDo\": ["
"        {"
"          \"X\": 0,"
"          \"Y\": 0"
"        }"
"      ]"
"    },"
"    \"Title\": \"Title\","
"    \"XUnit\": \"XUnit\","
"    \"YUnit\": \"YUnit\""
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_trend_get_machine_sar() {
  OnsOnsTrendGetMachineSarRequestType req;
  OnsOnsTrendGetMachineSarResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_trend_get_machine_sar_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.host_ip = "HostIp";
  req.app_id = "AppId";
  req.metric = "Metric";
  req.begin_time = "BeginTime";
  req.end_time = "EndTime";
  req.period = "Period";
  int ret = ons->OnsTrendGetMachineSar(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_trend_group_output_tps_response = "{"
"  \"Data\": {"
"    \"Records\": {"
"      \"StatsDataDo\": ["
"        {"
"          \"X\": 0,"
"          \"Y\": 0"
"        }"
"      ]"
"    },"
"    \"Title\": \"Title\","
"    \"XUnit\": \"XUnit\","
"    \"YUnit\": \"YUnit\""
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_trend_group_output_tps() {
  OnsOnsTrendGroupOutputTpsRequestType req;
  OnsOnsTrendGroupOutputTpsResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_trend_group_output_tps_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  req.begin_time = "BeginTime";
  req.end_time = "EndTime";
  req.period = "Period";
  int ret = ons->OnsTrendGroupOutputTps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_trend_topic_input_tps_response = "{"
"  \"Data\": {"
"    \"Records\": {"
"      \"StatsDataDo\": ["
"        {"
"          \"X\": 0,"
"          \"Y\": 0"
"        }"
"      ]"
"    },"
"    \"Title\": \"Title\","
"    \"XUnit\": \"XUnit\","
"    \"YUnit\": \"YUnit\""
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_trend_topic_input_tps() {
  OnsOnsTrendTopicInputTpsRequestType req;
  OnsOnsTrendTopicInputTpsResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_trend_topic_input_tps_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.topic = "Topic";
  req.begin_time = "BeginTime";
  req.end_time = "EndTime";
  req.period = "Period";
  int ret = ons->OnsTrendTopicInputTps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_admin_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_admin() {
  OnsOnsWarnAdminRequestType req;
  OnsOnsWarnAdminResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_admin_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.user_id = "UserId";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  req.type = "Type";
  int ret = ons->OnsWarnAdmin(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_create_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_create() {
  OnsOnsWarnCreateRequestType req;
  OnsOnsWarnCreateResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_create_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  req.threshold = "Threshold";
  req.contacts = "Contacts";
  int ret = ons->OnsWarnCreate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_delete_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_delete() {
  OnsOnsWarnDeleteRequestType req;
  OnsOnsWarnDeleteResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_delete_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsWarnDelete(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_disable_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_disable() {
  OnsOnsWarnDisableRequestType req;
  OnsOnsWarnDisableResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_disable_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsWarnDisable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_editor_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_editor() {
  OnsOnsWarnEditorRequestType req;
  OnsOnsWarnEditorResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_editor_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  req.threshold = "Threshold";
  req.contacts = "Contacts";
  int ret = ons->OnsWarnEditor(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_enable_response = "{"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_enable() {
  OnsOnsWarnEnableRequestType req;
  OnsOnsWarnEnableResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_enable_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsWarnEnable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
static const char* test_ons_warn_list_response = "{"
"  \"Data\": {"
"    \"WarnViewDO\": ["
"      {"
"        \"contacts\": {"
"          \"YunContact\": ["
"            {"
"              \"Name\": \"Name\","
"              \"Value\": \"Value\","
"              \"Type\": \"Type\","
"              \"Params\": \"Params\","
"              \"Ari\": \"Ari\""
"            }"
"          ]"
"        },"
"        \"AliyunPK\": \"AliyunPK\","
"        \"ConsumerID\": \"ConsumerID\","
"        \"Topic\": \"Topic\","
"        \"Threshold\": \"Threshold\","
"        \"Status\": true"
"      }"
"    ]"
"  },"
"  \"HelpUrl\": \"HelpUrl\""
"}";
static int test_ons_warn_list() {
  OnsOnsWarnListRequestType req;
  OnsOnsWarnListResponseType resp;
  Ons* ons = Ons::CreateOnsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ons) return 0;
  ons->SetProxyHost("127.0.0.1:12234");
  ons->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ons_warn_list_response);
  listener->Start();
  req.ons_region_id = "OnsRegionId";
  req.ons_platform = "OnsPlatform";
  req.prevent_cache = "PreventCache";
  req.consumer_id = "ConsumerId";
  req.topic = "Topic";
  int ret = ons->OnsWarnList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ons;
}
int main() {
  test_ons_cloud_get_appkey_list();
  test_ons_cluster_list();
  test_ons_cluster_names();
  test_ons_consumer_accumulate();
  test_ons_consumer_get_connection();
  test_ons_consumer_reset_offset();
  test_ons_consumer_status();
  test_ons_consumer_time_span();
  test_ons_empower_create();
  test_ons_empower_delete();
  test_ons_empower_list();
  test_ons_message_get_by_key();
  test_ons_message_get_by_msg_id();
  test_ons_message_get_by_topic();
  test_ons_message_push();
  test_ons_message_send();
  test_ons_message_trace();
  test_ons_publish_create();
  test_ons_publish_delete();
  test_ons_publish_get();
  test_ons_publish_list();
  test_ons_publish_search();
  test_ons_region_list();
  test_ons_subscription_create();
  test_ons_subscription_delete();
  test_ons_subscription_get();
  test_ons_subscription_list();
  test_ons_subscription_search();
  test_ons_topic_create();
  test_ons_topic_delete();
  test_ons_topic_get();
  test_ons_topic_list();
  test_ons_topic_search();
  test_ons_topic_status();
  test_ons_trend_cluster_input_tps();
  test_ons_trend_cluster_output_tps();
  test_ons_trend_get_machine_sar();
  test_ons_trend_group_output_tps();
  test_ons_trend_topic_input_tps();
  test_ons_warn_admin();
  test_ons_warn_create();
  test_ons_warn_delete();
  test_ons_warn_disable();
  test_ons_warn_editor();
  test_ons_warn_enable();
  test_ons_warn_list();
}
