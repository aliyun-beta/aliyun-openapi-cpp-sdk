DYNAMIC_TARGET = libaliyun_api_ess.so
STATIC_TARGET = libaliyun_api_ess.a
DEPS = \
  src/ali_ess.o \
  src/ali_ess_attach_instances.o \
  src/ali_ess_create_scaling_configuration.o \
  src/ali_ess_create_scaling_group.o \
  src/ali_ess_create_scaling_rule.o \
  src/ali_ess_create_scheduled_task.o \
  src/ali_ess_delete_scaling_configuration.o \
  src/ali_ess_delete_scaling_group.o \
  src/ali_ess_delete_scaling_rule.o \
  src/ali_ess_delete_scheduled_task.o \
  src/ali_ess_describe_scaling_activities.o \
  src/ali_ess_describe_scaling_configurations.o \
  src/ali_ess_describe_scaling_groups.o \
  src/ali_ess_describe_scaling_instances.o \
  src/ali_ess_describe_scaling_rules.o \
  src/ali_ess_describe_scheduled_tasks.o \
  src/ali_ess_detach_instances.o \
  src/ali_ess_disable_scaling_group.o \
  src/ali_ess_enable_scaling_group.o \
  src/ali_ess_execute_scaling_rule.o \
  src/ali_ess_modify_scaling_group.o \
  src/ali_ess_modify_scaling_rule.o \
  src/ali_ess_modify_scheduled_task.o \
  src/ali_ess_remove_instances.o \

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
