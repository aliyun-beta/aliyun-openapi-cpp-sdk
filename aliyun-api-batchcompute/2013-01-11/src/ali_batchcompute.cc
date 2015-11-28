#include <string.h>
#include "ali_batchcompute.h"
#include "ali_api_core.h"
namespace aliyun{
 BatchCompute* BatchCompute::CreateBatchComputeClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "BatchCompute");
    if(host_name.empty()) {
      return NULL;
    }
    return new BatchCompute(host_name, appid, secret);
  }
  BatchCompute::BatchCompute(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2013-01-11");
    use_tls_ = true;
    support_tls_ = true;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  BatchCompute::~BatchCompute() {
    free(appid_);
    free(secret_);
    free(host_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
