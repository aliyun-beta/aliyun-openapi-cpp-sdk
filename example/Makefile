.PHONY: all
all: ecs_example

ecs_example: ecs_example.cc ../aliyun-api-ecs/2014-05-26/libaliyun_api_ecs.a ../aliyun_api_core/libaliyun_core.a
	g++ -I../aliyun-api-ecs/2014-05-26/include/ -o ecs_example ecs_example.cc ../aliyun-api-ecs/2014-05-26/libaliyun_api_ecs.a ../aliyun_api_core/libaliyun_core.a

../aliyun-api-ecs/2014-05-26/libaliyun_api_ecs.a:
	make -C ../aliyun-api-ecs/2014-05-26/

../aliyun_api_core/libaliyun_core.a:
	make -C ../aliyun_api_core/

.PHONY: clean
clean:
	rm -f ecs_example ecs_example.o
	make -C ../aliyun-api-ecs/2014-05-26/ clean
	make -C ../aliyun_api_core/ clean