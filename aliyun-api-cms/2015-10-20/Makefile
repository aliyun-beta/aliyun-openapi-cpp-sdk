DYNAMIC_TARGET = libaliyun_api_cms.so
STATIC_TARGET = libaliyun_api_cms.a
DEPS = \
  src/ali_cms.o \
  src/ali_cms_batch_create_sql_metrics.o \
  src/ali_cms_batch_put_dim_table_data.o \
  src/ali_cms_batch_query_metric.o \
  src/ali_cms_create_dim_table.o \
  src/ali_cms_create_metric_stream.o \
  src/ali_cms_create_project.o \
  src/ali_cms_create_sql_metrics.o \
  src/ali_cms_delete_dim_table.o \
  src/ali_cms_delete_dim_table_data.o \
  src/ali_cms_delete_metrics.o \
  src/ali_cms_delete_metric_stream.o \
  src/ali_cms_delete_project.o \
  src/ali_cms_describe_metric.o \
  src/ali_cms_describe_metric_datum.o \
  src/ali_cms_get_dim_table.o \
  src/ali_cms_get_metrics_meta.o \
  src/ali_cms_get_metric_statistics.o \
  src/ali_cms_get_metric_stream.o \
  src/ali_cms_get_project.o \
  src/ali_cms_get_sql_metrics.o \
  src/ali_cms_list_dim_table.o \
  src/ali_cms_list_metric_stream.o \
  src/ali_cms_list_project.o \
  src/ali_cms_list_sql_metrics.o \
  src/ali_cms_put_dim_table_data.o \
  src/ali_cms_query_incremental.o \
  src/ali_cms_query_list_metric.o \
  src/ali_cms_query_metric.o \
  src/ali_cms_query_metric_top_n.o \
  src/ali_cms_query_statistics.o \
  src/ali_cms_start_project.o \
  src/ali_cms_status_project.o \
  src/ali_cms_stop_project.o \
  src/ali_cms_update_dim_table.o \
  src/ali_cms_update_metric_stream.o \
  src/ali_cms_update_project.o \
  src/ali_cms_update_sql_metrics.o \

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
