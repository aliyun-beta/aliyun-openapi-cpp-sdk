TARGET = aliyun_api_oss_admin.so
DEPS = \
  src/ali_oss_admin.o \
  src/ali_bind_bucket_vip.o \
  src/ali_create_img_vpc.o \
  src/ali_create_oss_vpc.o \
  src/ali_delete_img_vpc.o \
  src/ali_delete_oss_vpc.o \
  src/ali_get_bucket_vips.o \
  src/ali_get_img_vpc_info.o \
  src/ali_get_oss_vpc_info.o \
  src/ali_un_bind_bucket_vip.o \

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
