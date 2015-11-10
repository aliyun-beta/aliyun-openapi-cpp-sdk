#include "ali_otsfinance.h"
#include "ali_api_core.h"
namespace aliyun{
 OtsFinance* OtsFinance::CreateOtsFinanceClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "OtsFinance");
    if(host_name.empty()) {
      return NULL;
    }
    return new OtsFinance(host_name, appid, secret);
}
} // end namespace
