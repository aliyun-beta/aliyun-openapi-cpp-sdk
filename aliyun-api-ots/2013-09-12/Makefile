TARGET = aliyun_api_ots.so
DEPS = \
  src/ali_ots.o \
  src/ali_delete_instance.o \
  src/ali_delete_user.o \
  src/ali_get_instance.o \
  src/ali_get_user.o \
  src/ali_insert_instance.o \
  src/ali_insert_user.o \
  src/ali_list_instance.o \
  src/ali_update_instance.o \
  src/ali_update_user.o \

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
