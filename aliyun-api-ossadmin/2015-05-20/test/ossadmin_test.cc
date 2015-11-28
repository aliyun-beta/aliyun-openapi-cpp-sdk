#include "ali_ossadmin.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_bind_bucket_vip_response = "{"
"  \"requestId\": \"requestId\""
"}";
static int test_bind_bucket_vip() {
  OssAdminBindBucketVipRequestType req;
  OssAdminBindBucketVipResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_bind_bucket_vip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.vpc_id = "VpcId";
  req.vip = "Vip";
  req.bucket_name = "BucketName";
  int ret = ossadmin->BindBucketVip(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_create_img_vpc_response = "{"
"  \"requestId\": \"requestId\","
"  \"vip\": \"vip\","
"  \"vpcId\": \"vpcId\""
"}";
static int test_create_img_vpc() {
  OssAdminCreateImgVpcRequestType req;
  OssAdminCreateImgVpcResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_img_vpc_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.virtual_switch_id = "VirtualSwitchId";
  req.vpc_id = "VpcId";
  req.label = "Label";
  int ret = ossadmin->CreateImgVpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_create_oss_vpc_response = "{"
"  \"requestId\": \"requestId\","
"  \"vip\": \"vip\","
"  \"vpcId\": \"vpcId\""
"}";
static int test_create_oss_vpc() {
  OssAdminCreateOssVpcRequestType req;
  OssAdminCreateOssVpcResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_oss_vpc_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.virtual_switch_id = "VirtualSwitchId";
  req.vpc_id = "VpcId";
  req.label = "Label";
  int ret = ossadmin->CreateOssVpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_delete_img_vpc_response = "{"
"  \"requestId\": \"requestId\""
"}";
static int test_delete_img_vpc() {
  OssAdminDeleteImgVpcRequestType req;
  OssAdminDeleteImgVpcResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_img_vpc_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.vpc_id = "VpcId";
  req.label = "Label";
  int ret = ossadmin->DeleteImgVpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_delete_oss_vpc_response = "{"
"  \"requestId\": \"requestId\""
"}";
static int test_delete_oss_vpc() {
  OssAdminDeleteOssVpcRequestType req;
  OssAdminDeleteOssVpcResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_oss_vpc_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.vpc_id = "VpcId";
  req.label = "Label";
  int ret = ossadmin->DeleteOssVpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_get_bucket_vips_response = "{"
"  \"vipList\": {"
"    \"vip\": ["
"      \"vip\""
"    ]"
"  },"
"  \"requestId\": \"requestId\""
"}";
static int test_get_bucket_vips() {
  OssAdminGetBucketVipsRequestType req;
  OssAdminGetBucketVipsResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_bucket_vips_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.bucket_name = "BucketName";
  int ret = ossadmin->GetBucketVips(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_get_img_vpc_info_response = "{"
"  \"requestId\": \"requestId\","
"  \"vip\": \"vip\","
"  \"vpcId\": \"vpcId\""
"}";
static int test_get_img_vpc_info() {
  OssAdminGetImgVpcInfoRequestType req;
  OssAdminGetImgVpcInfoResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_img_vpc_info_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.vpc_id = "VpcId";
  req.label = "Label";
  int ret = ossadmin->GetImgVpcInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_get_oss_vpc_info_response = "{"
"  \"requestId\": \"requestId\","
"  \"vip\": \"vip\","
"  \"vpcId\": \"vpcId\""
"}";
static int test_get_oss_vpc_info() {
  OssAdminGetOssVpcInfoRequestType req;
  OssAdminGetOssVpcInfoResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_oss_vpc_info_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.vpc_id = "VpcId";
  req.label = "Label";
  int ret = ossadmin->GetOssVpcInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_un_bind_bucket_vip_response = "{"
"  \"requestId\": \"requestId\""
"}";
static int test_un_bind_bucket_vip() {
  OssAdminUnBindBucketVipRequestType req;
  OssAdminUnBindBucketVipResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ossadmin) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_un_bind_bucket_vip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.vpc_id = "VpcId";
  req.vip = "Vip";
  req.bucket_name = "BucketName";
  int ret = ossadmin->UnBindBucketVip(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
int main() {
  test_bind_bucket_vip();
  test_create_img_vpc();
  test_create_oss_vpc();
  test_delete_img_vpc();
  test_delete_oss_vpc();
  test_get_bucket_vips();
  test_get_img_vpc_info();
  test_get_oss_vpc_info();
  test_un_bind_bucket_vip();
}
