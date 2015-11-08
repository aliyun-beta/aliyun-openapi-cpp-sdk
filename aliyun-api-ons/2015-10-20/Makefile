TARGET = aliyun_api_ons.so
DEPS = \
  src/ali_ons.o \
  src/ali_ons_cloud_get_appkey_list.o \
  src/ali_ons_cluster_list.o \
  src/ali_ons_cluster_names.o \
  src/ali_ons_consumer_accumulate.o \
  src/ali_ons_consumer_get_connection.o \
  src/ali_ons_consumer_reset_offset.o \
  src/ali_ons_consumer_status.o \
  src/ali_ons_consumer_time_span.o \
  src/ali_ons_empower_create.o \
  src/ali_ons_empower_delete.o \
  src/ali_ons_empower_list.o \
  src/ali_ons_message_get_by_key.o \
  src/ali_ons_message_get_by_msg_id.o \
  src/ali_ons_message_get_by_topic.o \
  src/ali_ons_message_push.o \
  src/ali_ons_message_send.o \
  src/ali_ons_message_trace.o \
  src/ali_ons_publish_create.o \
  src/ali_ons_publish_delete.o \
  src/ali_ons_publish_get.o \
  src/ali_ons_publish_list.o \
  src/ali_ons_publish_search.o \
  src/ali_ons_region_list.o \
  src/ali_ons_subscription_create.o \
  src/ali_ons_subscription_delete.o \
  src/ali_ons_subscription_get.o \
  src/ali_ons_subscription_list.o \
  src/ali_ons_subscription_search.o \
  src/ali_ons_topic_create.o \
  src/ali_ons_topic_delete.o \
  src/ali_ons_topic_get.o \
  src/ali_ons_topic_list.o \
  src/ali_ons_topic_search.o \
  src/ali_ons_topic_status.o \
  src/ali_ons_trend_cluster_input_tps.o \
  src/ali_ons_trend_cluster_output_tps.o \
  src/ali_ons_trend_get_machine_sar.o \
  src/ali_ons_trend_group_output_tps.o \
  src/ali_ons_trend_topic_input_tps.o \
  src/ali_ons_warn_admin.o \
  src/ali_ons_warn_create.o \
  src/ali_ons_warn_delete.o \
  src/ali_ons_warn_disable.o \
  src/ali_ons_warn_editor.o \
  src/ali_ons_warn_enable.o \
  src/ali_ons_warn_list.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

$(TARGET): $(DEPS) $(SHARED_LIBS)
	g++ --shared -o $(TARGET) $(DEPS) $(SHARED_LIBS)

../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
