DYNAMIC_TARGET = libaliyun_api_batch_compute.so
STATIC_TARGET = libaliyun_api_batch_compute.a
DEPS = \
  src/ali_batch_compute.o \
  src/ali_get_image.o \
  src/ali_get_job.o \
  src/ali_get_job_description.o \
  src/ali_get_snapshot.o \
  src/ali_get_tasks.o \
  src/ali_list_images.o \
  src/ali_list_jobs.o \
  src/ali_list_snapshots.o \
  src/ali_post_job.o \
  #src/ali_remove_project_owner.o \

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
