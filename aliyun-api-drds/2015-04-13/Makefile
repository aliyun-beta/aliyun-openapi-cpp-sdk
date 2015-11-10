DYNAMIC_TARGET = libaliyun_api_drds.so
STATIC_TARGET = libaliyun_api_drds.a
DEPS = \
  src/ali_drds.o \
  src/ali_drds_alter_table.o \
  src/ali_drds_cancel_dd_ltask.o \
  src/ali_drds_create_drds_db.o \
  src/ali_drds_create_drds_instance.o \
  src/ali_drds_create_index.o \
  src/ali_drds_create_table.o \
  src/ali_drds_delete_drds_db.o \
  src/ali_drds_describe_create_drds_instance_status.o \
  src/ali_drds_describe_dd_ltask.o \
  src/ali_drds_describe_drds_db.o \
  src/ali_drds_describe_drds_db_ip_white_list.o \
  src/ali_drds_describe_drds_dbs.o \
  src/ali_drds_describe_drds_instance.o \
  src/ali_drds_describe_drds_instances.o \
  src/ali_drds_drop_indexes.o \
  src/ali_drds_drop_tables.o \
  src/ali_drds_list_un_complete_tasks.o \
  src/ali_drds_modify_drds_db_passwd.o \
  src/ali_drds_modify_drds_instance_description.o \
  src/ali_drds_modify_drds_ip_white_list.o \
  src/ali_drds_remove_drds_instance.o \

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
