DYNAMIC_TARGET = libaliyun_api_ots.so
STATIC_TARGET = libaliyun_api_ots.a
DEPS = \
  src/ali_ots.o \
  src/ali_ots_delete_instance.o \
  src/ali_ots_delete_user.o \
  src/ali_ots_get_instance.o \
  src/ali_ots_get_user.o \
  src/ali_ots_insert_instance.o \
  src/ali_ots_insert_user.o \
  src/ali_ots_list_instance.o \
  src/ali_ots_update_instance.o \
  src/ali_ots_update_user.o \

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
