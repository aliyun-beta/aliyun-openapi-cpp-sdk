#include <string.h>
#include "ali_ecs.h"
#include "ali_api_core.h"
namespace aliyun{
 Ecs* Ecs::CreateEcsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ecs");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ecs(host_name, appid, secret);
  }
  Ecs::Ecs(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2014-05-26");
    region_id_ = NULL;
    use_tls_ = true;
    support_tls_ = true;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  Ecs::~Ecs() {
    free(appid_);
    free(secret_);
    free(host_);
    if(region_id_) free(region_id_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
