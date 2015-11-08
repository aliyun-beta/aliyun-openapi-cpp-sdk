TARGET = aliyun_api_cms.so
DEPS = \
  src/ali_cms.o \
  src/ali_describe_metric_datum.o \
  src/ali_put_metric_datum.o \

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
