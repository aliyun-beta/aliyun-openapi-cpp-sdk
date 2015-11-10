DYNAMIC_TARGET = libaliyun_api_ram.so
STATIC_TARGET = libaliyun_api_ram.a
DEPS = \
  src/ali_ram.o \
  src/ali_ram_add_user.o \
  src/ali_ram_delete_user_policy.o \
  src/ali_ram_get_user.o \
  src/ali_ram_get_user_policy.o \
  src/ali_ram_list_user_policies.o \
  src/ali_ram_list_users.o \
  src/ali_ram_put_user_policy.o \
  src/ali_ram_remove_user.o \

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
