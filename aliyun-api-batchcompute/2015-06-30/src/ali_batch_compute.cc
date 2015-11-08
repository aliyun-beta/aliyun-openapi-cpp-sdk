#include "ali_batch_compute.h"
#include "ali_api_core.h"
namespace aliyun{
 BatchCompute* BatchCompute::CreateBatchComputeClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "BatchCompute");
    if(host_name.empty()) {
      return NULL;
    }
    return new BatchCompute(host_name, appid, secret);
}
} // end namespace
