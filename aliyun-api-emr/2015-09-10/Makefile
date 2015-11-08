TARGET = aliyun_api_emr.so
DEPS = \
  src/ali_emr.o \
  src/ali_create_cluster.o \
  src/ali_create_execute_plan.o \
  src/ali_create_execute_plan_with_cluster.o \
  src/ali_create_job.o \
  src/ali_delete_execute_plan.o \
  src/ali_delete_job.o \
  src/ali_describe_cluster.o \
  src/ali_describe_execute_plan.o \
  src/ali_describe_job.o \
  src/ali_job_resource.o \
  src/ali_kill_execute_plan_record_node.o \
  src/ali_list_clusters.o \
  src/ali_list_config_type.o \
  src/ali_list_execute_plan_execute_record_nodes.o \
  src/ali_list_execute_plan_execute_records.o \
  src/ali_list_execute_plan_jobs.o \
  src/ali_list_execute_plan_node_instances.o \
  src/ali_list_execute_plans.o \
  src/ali_list_jobs.o \
  src/ali_list_regions.o \
  src/ali_modify_cluster_name.o \
  src/ali_modify_execute_plan.o \
  src/ali_modify_execute_plan_with_cluster.o \
  src/ali_modify_job.o \
  src/ali_release_cluster.o \
  src/ali_resume_execute_plan.o \
  src/ali_run_execute_plan.o \
  src/ali_stop_execute_plan.o \

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
