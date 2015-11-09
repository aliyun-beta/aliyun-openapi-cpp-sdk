DYNAMIC_TARGET = libaliyun_api_cms.so
STATIC_TARGET = libaliyun_api_cms.a
DEPS = \
  src/ali_cms.o \
  src/ali_batch_create_metrics.o \
  src/ali_batch_create_sql_metrics.o \
  src/ali_batch_put_dim_table_data.o \
  src/ali_batch_query_metric.o \
  src/ali_create_dim_table.o \
  src/ali_create_metrics.o \
  src/ali_create_metric_stream.o \
  src/ali_create_project.o \
  src/ali_create_sq_lmetrics.o \
  src/ali_delete_dim_table.o \
  src/ali_delete_dim_table_data.o \
  src/ali_delete_metrics.o \
  src/ali_delete_metric_stream.o \
  src/ali_delete_project.o \
  src/ali_describe_metric.o \
  src/ali_describe_metric_datum.o \
  src/ali_describe_metric_list.o \
  src/ali_get_dim_table.o \
  src/ali_get_metrics.o \
  src/ali_get_metrics_meta.o \
  src/ali_get_metric_statistics.o \
  src/ali_get_metric_stream.o \
  src/ali_get_metric_stream_meta.o \
  src/ali_get_metric_stream_status.o \
  src/ali_get_project.o \
  src/ali_get_sq_lmetrics.o \
  src/ali_list_dim_table.o \
  src/ali_list_dim_table_data.o \
  src/ali_list_metrics.o \
  src/ali_list_metrics_plan.o \
  src/ali_list_metric_stream.o \
  src/ali_list_project.o \
  src/ali_list_sq_lmetrics.o \
  src/ali_put_dim_table_data.o \
  src/ali_query_incremental.o \
  src/ali_query_list_metric.o \
  src/ali_query_metric.o \
  src/ali_query_metric_top_n.o \
  src/ali_query_statistics.o \
  src/ali_start_metric_stream.o \
  src/ali_start_project.o \
  src/ali_status_project.o \
  src/ali_stop_metric_stream.o \
  src/ali_stop_project.o \
  src/ali_update_dim_table.o \
  src/ali_update_metrics.o \
  src/ali_update_metric_stream.o \
  src/ali_update_project.o \
  src/ali_update_sq_lmetrics.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = -fPIC $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

.PHONY:all
all: $(DYNAMIC_TARGET) $(STATIC_TARGET)

$(DYNAMIC_TARGET): $(DEPS) $(SHARED_LIBS)
	g++ -fPIC --shared -o $(DYNAMIC_TARGET) $(DEPS) $(SHARED_LIBS)

$(STATIC_TARGET): $(DEPS)
	$(AR) rcs $(STATIC_TARGET) $(DEPS)
../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DYNAMIC_TARGET) $(STATIC_TARGET) $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
