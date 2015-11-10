DYNAMIC_TARGET = libaliyun_api_aas.so
STATIC_TARGET = libaliyun_api_aas.a
DEPS = \
  src/ali_aas.o \
  src/ali_aas_create_access_key_for_account.o \
  src/ali_aas_create_aliyun_account.o \
  src/ali_aas_delete_access_key_for_account.o \
  src/ali_aas_get_basic_info_for_account.o \
  src/ali_aas_list_access_keys_for_account.o \
  src/ali_aas_update_access_key_status_for_account.o \

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
