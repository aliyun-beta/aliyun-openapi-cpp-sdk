DYNAMIC_TARGET = libaliyun_api_ots_finance.so
STATIC_TARGET = libaliyun_api_ots_finance.a
DEPS = \
  src/ali_otsfinance.o \
  src/ali_otsfinance_delete_instance.o \
  src/ali_otsfinance_delete_user.o \
  src/ali_otsfinance_get_instance.o \
  src/ali_otsfinance_get_user.o \
  src/ali_otsfinance_insert_instance.o \
  src/ali_otsfinance_insert_user.o \
  src/ali_otsfinance_list_instance.o \
  src/ali_otsfinance_update_instance.o \
  src/ali_otsfinance_update_user.o \

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
