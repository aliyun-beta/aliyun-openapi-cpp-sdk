#include "ali_encode_utils.h"
#include "ali_urlencode.h"
#include "../http_test_listener.h"
#include "ali_http_request.h"
#include "../ali_roa_request.h"
#include "../ali_rpc_request.h"
#include "../ali_get_region_host.h"
#include "ali_string_utils.h"
#include <string.h>
#include <string>
#include <stdio.h>
int md5_test() {
  return 0;
}

int urlencode_test() {
  // use website below for test
  // http://web.chacuo.net/charseturlencode
  // charset:utf8
  // complex type:encode everything except letter & digit
  int ret = 0;
  std::string result = urlencode("abc !@#$\"");
  if(result != "abc%20%21%40%23%24%22") {
    ret = -1;
    goto out;
  }

  result = urlencode("http://www.baidu.com/s?ie=utf-8&f=8&tn=baidu&wd=临时邮箱");
  if(result != "http%3A%2F%2Fwww.baidu.com%2Fs%3Fie%3Dutf-8%26f%3D8%26tn%3Dbaidu%26wd%3D%E4%B8%B4%E6%97%B6%E9%82%AE%E7%AE%B1") {
    printf(" urlencodefailed\n");
    ret = -1;
    goto out;
  }

out:
  return ret;
}

int http_post_query_test() {
 // ALI_LOG("http_post_query_test start");
  int ret = 0;
  int status_code;
  std::string response_body;
  AliHttpRequest* req = new AliHttpRequest("http://www.baidu.com");
  req->SetHttpProxy("127.0.0.1:22334");
  HttpTestListener* listener = new HttpTestListener(22334);
  listener->AddResponseHeader("Content-Length", "5");
  listener->SetResponseBody("hello");
  listener->Start();
  req->AddRequestQuery("user_name", "lili");
  req->AddRequestHeader("User-Agent", "AliHttpRequest");
  req->setRequestMethod("POST");
  req->CommitRequest();
  status_code = req->WaitResponseHeaderComplete();
  req->ReadResponseBody(response_body);
  delete req;
  listener->WaitComplete();

  if(listener->GetRequestHeader("Content-Length") != get_format_string("%d",strlen("user_name=lili"))) {
    ret = -1;
    goto out;
  }

  if(listener->GetRequestBody() != "user_name=lili") {
    ret = -1;
    goto out;
  }

  if(response_body != "hello") {
    ret = -1;
    goto out;
  }
  
out:
  delete listener;
  return ret;
}

int http_get_test() {
  int ret = 0;
  int status_code;
  std::string response_body;
  AliHttpRequest* req = new AliHttpRequest("http://www.baidu.com?id=1122");
  req->SetHttpProxy("127.0.0.1:22334");
  HttpTestListener* listener = new HttpTestListener(22334);
  listener->AddResponseHeader("Content-Length", "5");
  listener->SetResponseBody("hello");
  listener->Start();
  req->AddRequestQuery("user_name", "lili");
  req->AddRequestHeader("User-Agent", "AliHttpRequest");
  req->CommitRequest();
  status_code = req->WaitResponseHeaderComplete();

  if(status_code < 0) {
    delete req;
    ret = -1;
    goto out;
  }
  req->ReadResponseBody(response_body);
  delete req;
  listener->WaitComplete();

  if(listener->GetRequestQuery("id") != "1122") {
    ret = -1;
    goto out;
  }

  if(listener->GetRequestQuery("user_name") != "lili") {
    ret = -1;
    goto out;
  }

  if(listener->GetRequestHeader("User-Agent") != "AliHttpRequest") {
    ret = -1;
    goto out;
  }
out:
  delete listener;
  return ret;
}

int rpc_request_test() {
  int ret = 0;
  std::string sign_query_str;
  std::string response_str;
  std::string sign;
  AliRpcRequest* req = new AliRpcRequest("2015-11-03", "test_appid", "test_secret", "http://www.baidu.com");
  req->SetHttpProxy("127.0.0.1:22334");
  HttpTestListener* listener = new HttpTestListener(22334);
  listener->SetResponseBody("{}");
  listener->Start();
  req->AddRequestQuery("Acrion", "Buy");
  req->AddRequestQuery("Count", "2");
  req->AddRequestQuery("ItemId", "12345");
  req->CommitRequest();
  req->WaitResponseHeaderComplete();
  req->ReadResponseBody(response_str);

  listener->WaitComplete();
  sign = listener->GetRequestQuery("Signature");
 
  std::map<std::string, std::string>& map_query = listener->GetAllRequestQuery();
  map_query.erase("Signature");
  for(std::map<std::string, std::string>::iterator it = map_query.begin();
      it != map_query.end(); it++) {

    if(!sign_query_str.empty()) {
       sign_query_str.append("&");
    }
    append_format_string(sign_query_str, "%s=%s", urlencode(it->first).c_str(), it->second.c_str());
  }
  sign_query_str = listener->GetRequestMethod() + "&" + urlencode("/") + "&" + urlencode(sign_query_str);

  std::string sign_compute = encode_compute_hmac_sha1("test_secret&", (char*)sign_query_str.c_str(), sign_query_str.size());
  sign_compute = urlencode(sign_compute);
  delete req;
  
  if(sign != sign_compute) {
    ret = -1;
    goto out;
  }

out:
  delete listener;
  return ret;
}

int roa_request_test() {
  int ret = 0;
  std::string sign_query_str;
  std::string response_str;
  std::string sign;
  AliRoaRequest* req = new AliRoaRequest("2015-11-03", "test_appid", "test_secret", "http://www.baidu.com/jobs");
  req->SetHttpProxy("127.0.0.1:22334");
  HttpTestListener* listener = new HttpTestListener(22334);
  listener->SetResponseBody("{}");
  listener->Start();
  req->AddRequestQuery("Acrion", "Buy");
  req->AddRequestQuery("Count", "2");
  req->AddRequestQuery("ItemId", "12345");
  req->CommitRequest();
  req->WaitResponseHeaderComplete();
  req->ReadResponseBody(response_str);
  delete req;
  std::string gmt_time = listener->GetRequestHeader("Date"); 
  std::string version = listener->GetRequestHeader("x-acs-version"); 

  std::string compose_url = listener->GetRequestMethod() + "\n";
  std::map<std::string, std::string> map_request_headers_ = listener->GetAllRequestHeader();

  if(map_request_headers_.find("Accept") != map_request_headers_.end()) {
    compose_url.append(map_request_headers_["Accept"]);
  }
  compose_url.append("\n");
  if(map_request_headers_.find("Content-Md5") != map_request_headers_.end()) {
    compose_url.append(map_request_headers_["Content-Md5"]);
  } 
  compose_url.append("\n");
  if(map_request_headers_.find("Content-Type") != map_request_headers_.end()) {
    compose_url.append(map_request_headers_["Content-Type"]);
  }
  bool is_first_query = true;
  
  compose_url.append("\n");
  compose_url.append(gmt_time);
  compose_url.append("\n");
  compose_url.append("x-acs-signature-method:HMAC-SHA1\n");
  compose_url.append("x-acs-signature-version:1.0\n");
  compose_url.append("x-acs-version:" + version + "\n");
  compose_url.append(listener->GetRequestUrl());

  sign = encode_compute_hmac_sha1("test_secret", (char *)compose_url.c_str(), compose_url.size());
  sign = "acs test_appid:" + sign;
  std::string auth_hdr = listener->GetRequestHeader("Authorization");
  delete listener;

  if(sign == auth_hdr) {
    return 0;
  } else {
    return -1;
  }
}

int get_region_host_test() {
  if(aliyun::AliGetEndpointHost("cn-qingdao", "Ecs") == "ecs-cn-hangzhou.aliyuncs.com") {

    return 0;
  } else {
    return -1;
  }

  if(aliyun::AliGetEndpointHost("cn-shenzhen", "BatchCompute") == "batchcompute.cn-shenzhen.aliyuncs.com") {
    return 0;
  } else {
    return -1;
  }  
}

int get_format_string_test() {
  char big_data[10240] = {};
  memset(big_data, 'a', sizeof(big_data) - 1);
  std::string res = get_format_string("bbb%sccc", big_data);
  std::string test_target = std::string("bbb") +  big_data + "ccc";
  if(res == test_target) {
    return 0;
  } else {
    return -1;
  }
}

int append_format_string_test() {
  std::string string_append = "ccc";
  char big_data[10240] = {};
  memset(big_data, 'a', sizeof(big_data) - 1);
  append_format_string(string_append, "bbb%sccc%d", big_data, 123);
  std::string test_target = std::string("cccbbb") +  big_data + "ccc123";
  if(string_append == test_target) {
    return 0;
  } else {
    return -1;
  }
}

int main() {
  if(urlencode_test() == 0) {
    printf("urlencode_test pass\n");
  } else {
    printf("urlencode_test failed\n");
    return -1;
  }

  if(http_get_test() == 0) {
    printf("http_get_test pass\n");
  } else {
    printf("http_get_test failed\n");
    return -1;
  }

  if(http_post_query_test() == 0) {
    printf("http_post_query_test pass\n");
  } else {
    printf("http_post_query_test failed\n");
    return -1;
  }

  if(rpc_request_test() == 0) {
    printf("rpc_request_test pass\n");
  } else {
    printf("rpc_request_test failed\n");
    return -1;
  }

  if(get_region_host_test() == 0) {
    printf("get_region_host_test pass\n");
  } else {
    printf("get_region_host_test failed\n");
    return -1;
  }

  if(get_format_string_test() == 0) {
    printf("get_format_string_test pass\n");
  } else {
    printf("get_format_string_test failed\n");
    return -1;
  }

  if(append_format_string_test() == 0) {
    printf("append_format_string_test pass\n");
  } else {
    printf("append_format_string_test failed\n");
    return -1;
  }

}

