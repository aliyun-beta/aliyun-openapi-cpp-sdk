#include <string.h>
#include "ali_cms.h"
#include "ali_api_core.h"
namespace aliyun{
 Cms* Cms::CreateCmsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Cms");
    if(host_name.empty()) {
      return NULL;
    }
    return new Cms(host_name, appid, secret);
  }
  Cms::Cms(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2015-04-20");
    region_id_ = NULL;
    use_tls_ = false;
    support_tls_ = false;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  Cms::~Cms() {
    free(appid_);
    free(secret_);
    free(host_);
    if(region_id_) free(region_id_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
