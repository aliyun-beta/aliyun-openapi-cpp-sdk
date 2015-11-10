DYNAMIC_TARGET = libaliyun_api_oss_admin.so
STATIC_TARGET = libaliyun_api_oss_admin.a
DEPS = \
  src/ali_ossadmin.o \
  src/ali_ossadmin_bind_bucket_vip.o \
  src/ali_ossadmin_create_img_vpc.o \
  src/ali_ossadmin_create_oss_vpc.o \
  src/ali_ossadmin_delete_img_vpc.o \
  src/ali_ossadmin_delete_oss_vpc.o \
  src/ali_ossadmin_get_bucket_vips.o \
  src/ali_ossadmin_get_img_vpc_info.o \
  src/ali_ossadmin_get_oss_vpc_info.o \
  src/ali_ossadmin_un_bind_bucket_vip.o \

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
