#include <string.h>
#include "ali_rkvstore.h"
#include "ali_api_core.h"
namespace aliyun{
 Rkvstore* Rkvstore::CreateRkvstoreClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Rkvstore");
    if(host_name.empty()) {
      return NULL;
    }
    return new Rkvstore(host_name, appid, secret);
  }
  Rkvstore::Rkvstore(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2015-01-01");
    region_id_ = NULL;
    use_tls_ = true;
    support_tls_ = true;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  Rkvstore::~Rkvstore() {
    free(appid_);
    free(secret_);
    free(host_);
    if(region_id_) free(region_id_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
