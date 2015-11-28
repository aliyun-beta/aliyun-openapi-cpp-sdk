# Aliyun-Open-Sdk for C++

[![Build Status](https://drone.io/github.com/zcy421593/aliyun-openapi-cpp-sdk/status.png)](https://drone.io/github.com/zcy421593/aliyun-openapi-cpp-sdk/latest)
### Introduction
This is a c++ implement for aliyun open sdk.
The meta data of functions is here: https://github.com/aliyun/openapi-meta.

### How to compile
We provide CMakeLists.txt to build.Version
#### Linux or MacOS or Cygwin

On linux or MacOS, we provide makefie to generate shared library.  
If you want to build all projects, just make in sourct root folder like beleow
> mkdir build   
> cmake ..   
> make   

If you just need to build single library, just make the target you need.The rule of library name is aliyun-api-${productname}-${version}.
For example to build acs,type command:
> mkdir build   
> cmake ..   
> make aliyun-api-ecs_2014_05_26   

To enable code cover test, add flag COVER_TEST=1
> mkdir build   
> cmake -DCOVER_TEST=1 ..   
> make  

#### Windows && Visual Studio
Install CMake(version >= 3.0) and Visual Studio,enter the root directory of the code, type commands below:
> mkdir build   
> cmake ..   
The Visual Studo solution file will be generated.

### How to use

For example we need to use ecs project,we need to:
1, add ecs include folder to project   
2, link dynamic library of ecs   

here is the sample code:   
    #include "ali_ecs.h"
    #include <stdio.h>
    using namespace aliyun;

    void show_regions() {

      EcsDescribeRegionsRequestType req;
      EcsDescribeRegionsResponseType resp;
      EcsErrorInfo error_info;

      int status_code = 0;

      Ecs* ecs = Ecs::CreateEcsClient("cn_shenzhen", "myappid", "mysecret");
      printf(">>>>>>> show regions start >>>>>>>>>>>>\n");
      if(!ecs) {
        printf("error endpoint not found");
        goto out;
      }

      status_code = ecs->DescribeRegions(req, &resp, &error_info);

      if(status_code != 200) {
        printf("status code=%d\n", status_code);
        printf("code = %s\n", error_info.code.c_str());
        printf("message = %s\n", error_info.message.c_str());
        goto out;
      }
      printf("status code=%d\n", status_code);
      for(int i = 0; i < resp.regions.size(); i++) {
        printf("=========\n");
        printf("region_id:%s\n", resp.regions[i].region_id.c_str());
        printf("local_name:%s\n", resp.regions[i].local_name.c_str());
      }
    out:
      if(ecs) {
        delete ecs;
      }
      printf(">>>>>>> show regions end >>>>>>>>>>>>\n");
    }
