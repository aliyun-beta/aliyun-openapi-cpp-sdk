#include "ali_ecs.h"
#include <stdio.h>
static const char* s_appid = "myappid";
static const char* s_secret = "myacret";
using namespace aliyun;
void show_instances() {
  EcsDescribeInstancesRequestType req;
  EcsDescribeInstancesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn_shenzhen", s_appid, s_secret);
  ecs->SetUseTls(true);
  ecs->SetRegionId("us-west-1");
  printf(">>>>>>> show_instances start >>>>>>>>>>>>\n");
  int res = ecs->DescribeInstances(req, &resp, NULL);
  printf("ret = %d\n", res);
  printf("instance count=%d\n", resp.instances.size());
  for(int i = 0; i < resp.instances.size(); i ++) {
    printf("=========\n");
    printf("instance name=%s\n", resp.instances[i].instance_name.c_str());
  }
  delete ecs;
  printf(">>>>>>> show_instances end >>>>>>>>>>>>\n");
}
void show_regions() {

  EcsDescribeRegionsRequestType req;
  EcsDescribeRegionsResponseType resp;
  EcsErrorInfo error_info;

  int status_code = 0;

  Ecs* ecs = Ecs::CreateEcsClient("cn_shenzhen", s_appid, s_secret);
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

int main() {
  show_regions();
  show_instances();
  return 0;
}