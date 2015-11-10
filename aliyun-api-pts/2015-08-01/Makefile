DYNAMIC_TARGET = libaliyun_api_pt_s.so
STATIC_TARGET = libaliyun_api_pt_s.a
DEPS = \
  src/ali_pts.o \
  src/ali_pts_create_transaction.o \
  src/ali_pts_get_key_secret.o \
  src/ali_pts_get_script.o \
  src/ali_pts_get_tasks.o \
  src/ali_pts_report_log_sample.o \
  src/ali_pts_report_test_sample.o \
  src/ali_pts_report_vuser.o \
  src/ali_pts_send_wang_wang.o \
  src/ali_pts_set_scenario_status.o \
  src/ali_pts_set_task_status.o \
  src/ali_pts_stop_task.o \

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
