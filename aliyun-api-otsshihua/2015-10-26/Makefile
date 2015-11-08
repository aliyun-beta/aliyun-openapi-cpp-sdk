TARGET = aliyun_api_ots_shihua.so
DEPS = \
  src/ali_ots_shihua.o \
  src/ali_delete_instance.o \
  src/ali_get_instance.o \
  src/ali_insert_instance.o \
  src/ali_list_instance.o \

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
