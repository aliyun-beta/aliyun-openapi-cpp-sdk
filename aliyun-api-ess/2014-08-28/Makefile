TARGET = aliyun_api_ess.so
DEPS = \
  src/ali_ess.o \
  src/ali_attach_instances.o \
  src/ali_create_scaling_configuration.o \
  src/ali_create_scaling_group.o \
  src/ali_create_scaling_rule.o \
  src/ali_create_scheduled_task.o \
  src/ali_delete_scaling_configuration.o \
  src/ali_delete_scaling_group.o \
  src/ali_delete_scaling_rule.o \
  src/ali_delete_scheduled_task.o \
  src/ali_describe_scaling_activities.o \
  src/ali_describe_scaling_configurations.o \
  src/ali_describe_scaling_groups.o \
  src/ali_describe_scaling_instances.o \
  src/ali_describe_scaling_rules.o \
  src/ali_describe_scheduled_tasks.o \
  src/ali_detach_instances.o \
  src/ali_disable_scaling_group.o \
  src/ali_enable_scaling_group.o \
  src/ali_execute_scaling_rule.o \
  src/ali_modify_scaling_group.o \
  src/ali_modify_scaling_rule.o \
  src/ali_modify_scheduled_task.o \
  src/ali_remove_instances.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = -fPIC $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

$(TARGET): $(DEPS) $(SHARED_LIBS)
	g++ --shared -fPIC -o $(TARGET) $(DEPS) $(SHARED_LIBS)

../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
