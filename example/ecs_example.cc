#include "ali_ecs.h"
#include <stdio.h>
using namespace aliyun;

void show_regions() {

  DescribeRegionsRequestType req;
  DescribeRegionsResponseType resp;
  AliEcsErrorInfo error_info;

  int status_code = 0;

  Ecs* ecs = Ecs::CreateEcsClient("cn_shenzhen", "yourappid", "yoursecret");
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
  return 0;
}