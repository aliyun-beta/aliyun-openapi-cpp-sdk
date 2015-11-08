TARGET = aliyun_api_batch_compute.so
DEPS = \
  src/ali_batch_compute.o \
  src/ali_post_job.o \
  src/ali_get_job.o \
  src/ali_get_job_description.o \
  src/ali_get_tasks.o \
  src/ali_list_images.o \
  src/ali_list_jobs.o \
  src/ali_list_snapshots.o \

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
