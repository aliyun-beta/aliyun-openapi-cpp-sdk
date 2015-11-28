#include <string.h>
#include "ali_ram.h"
#include "ali_api_core.h"
namespace aliyun{
 Ram* Ram::CreateRamClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ram");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ram(host_name, appid, secret);
  }
  Ram::Ram(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2014-02-14");
    region_id_ = NULL;
    use_tls_ = true;
    support_tls_ = true;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  Ram::~Ram() {
    free(appid_);
    free(secret_);
    free(host_);
    if(region_id_) free(region_id_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
