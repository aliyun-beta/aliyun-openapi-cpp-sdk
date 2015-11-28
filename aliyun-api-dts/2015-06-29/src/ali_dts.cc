#include <string.h>
#include "ali_dts.h"
#include "ali_api_core.h"
namespace aliyun{
 Dts* Dts::CreateDtsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Dts");
    if(host_name.empty()) {
      return NULL;
    }
    return new Dts(host_name, appid, secret);
  }
  Dts::Dts(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2015-06-29");
    region_id_ = NULL;
    use_tls_ = false;
    support_tls_ = false;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  Dts::~Dts() {
    free(appid_);
    free(secret_);
    free(host_);
    if(region_id_) free(region_id_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
