TARGET = aliyun_api_ram.so
DEPS = \
  src/ali_ram.o \
  src/ali_add_user.o \
  src/ali_delete_user_policy.o \
  src/ali_get_user.o \
  src/ali_get_user_policy.o \
  src/ali_list_user_policies.o \
  src/ali_list_users.o \
  src/ali_put_user_policy.o \
  src/ali_remove_user.o \

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
