TARGET = aliyun_api_pt_s.so
DEPS = \
  src/ali_pts.o \
  src/ali_create_transaction.o \
  src/ali_get_key_secret.o \
  src/ali_get_script.o \
  src/ali_get_tasks.o \
  src/ali_report_log_sample.o \
  src/ali_report_test_sample.o \
  src/ali_report_vuser.o \
  src/ali_send_wang_wang.o \
  src/ali_set_scenario_status.o \
  src/ali_set_task_status.o \
  src/ali_stop_task.o \

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
