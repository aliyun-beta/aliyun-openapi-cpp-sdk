# Aliyun-Open-Sdk for C++

### Introduction
This is a c++ implement for aliyun open sdk.
The meta data of functions is here: https://github.com/aliyun/openapi-meta.

### How to compile

#### Linux or MacOS  
On linux or MacOS, we provide makefie to generate shared library.  
If you want to build all projects, just make in sourct root folder like beleow
> make  
  
If you just need to use single library, just enter the folder which the project you need,and make.  

#### Windows
We will commit the sln file latter.But it's easily to compile just include the codes to project, and add the include folder to project setting.Remember to call WSAStartup to initial socket library.

### How to use
For example we need to use ecs project, and call describe regions function, just code like below  

    #include "ali_ecs.h"
    using namespace aliyun;
    int main() {
      DescribeRegionsRequestType req;
      DescribeRegionsResponseType resp;
      Ecs* ecs = Ess::CreateEcsClient("cn_shenzhen", "yourappid", "yoursecret");
      if(!ecs) {  // if endpoint not found, the instance cannot be created
        return -1;
      }
      int status_code = ecs->DescribeRegions(req, &resp, NULL);
      // deal with the result
      ....

      delete ecs;
      return 0;
    }
