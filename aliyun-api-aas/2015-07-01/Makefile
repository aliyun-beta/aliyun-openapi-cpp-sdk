TARGET = aliyun_api_aas.so
DEPS = \
  src/ali_aas.o \
  src/ali_create_access_key_for_account.o \
  src/ali_create_aliyun_account.o \
  src/ali_delete_access_key_for_account.o \
  src/ali_get_basic_info_for_account.o \
  src/ali_list_access_keys_for_account.o \
  src/ali_update_access_key_status_for_account.o \

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
