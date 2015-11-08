TARGET = aliyun_api_cms.so
DEPS = \
  src/ali_cms.o \
  src/ali_batch_create_sql_metrics.o \
  src/ali_batch_put_dim_table_data.o \
  src/ali_batch_query_metric.o \
  src/ali_create_dim_table.o \
  src/ali_create_metric_stream.o \
  src/ali_create_project.o \
  src/ali_create_sql_metrics.o \
  src/ali_delete_dim_table.o \
  src/ali_delete_dim_table_data.o \
  src/ali_delete_metrics.o \
  src/ali_delete_metric_stream.o \
  src/ali_delete_project.o \
  src/ali_describe_metric.o \
  src/ali_describe_metric_datum.o \
  src/ali_get_dim_table.o \
  src/ali_get_metrics_meta.o \
  src/ali_get_metric_statistics.o \
  src/ali_get_metric_stream.o \
  src/ali_get_project.o \
  src/ali_get_sql_metrics.o \
  src/ali_list_dim_table.o \
  src/ali_list_metric_stream.o \
  src/ali_list_project.o \
  src/ali_list_sql_metrics.o \
  src/ali_put_dim_table_data.o \
  src/ali_query_incremental.o \
  src/ali_query_list_metric.o \
  src/ali_query_metric.o \
  src/ali_query_metric_top_n.o \
  src/ali_query_statistics.o \
  src/ali_start_project.o \
  src/ali_status_project.o \
  src/ali_stop_project.o \
  src/ali_update_dim_table.o \
  src/ali_update_metric_stream.o \
  src/ali_update_project.o \
  src/ali_update_sql_metrics.o \

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
