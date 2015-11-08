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
} // end namespace
