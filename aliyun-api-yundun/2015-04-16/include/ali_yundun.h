#ifndef ALI_YUNDUNH
#define ALI_YUNDUNH
#include <string>
#include "ali_add_cname_waf_types.h"
#include "ali_bruteforce_log_types.h"
#include "ali_close_cc_protect_types.h"
#include "ali_close_port_scan_types.h"
#include "ali_close_vul_scan_types.h"
#include "ali_config_ddos_types.h"
#include "ali_confirm_login_types.h"
#include "ali_ddos_flow_graph_types.h"
#include "ali_ddos_log_types.h"
#include "ali_delete_back_door_file_types.h"
#include "ali_delete_cname_waf_types.h"
#include "ali_detect_vul_by_id_types.h"
#include "ali_detect_vul_by_ip_types.h"
#include "ali_get_ddos_config_options_types.h"
#include "ali_list_instance_infos_types.h"
#include "ali_loginevent_log_types.h"
#include "ali_open_cc_protect_types.h"
#include "ali_open_port_scan_types.h"
#include "ali_open_vul_scan_types.h"
#include "ali_query_ddos_config_types.h"
#include "ali_secure_check_types.h"
#include "ali_service_status_types.h"
#include "ali_set_ddos_auto_types.h"
#include "ali_set_ddos_qps_types.h"
#include "ali_summary_types.h"
#include "ali_vul_scan_log_types.h"
#include "ali_waf_info_types.h"
#include "ali_waf_log_types.h"
#include "ali_webshell_log_types.h"
namespace aliyun {
struct AliYundunErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Yundun {
public:
  static Yundun* CreateYundunClient(std::string endpoint, std::string appid, std::string secret);
private:
  Yundun(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-04-16"),
  host_(host) {}
public:
  int AddCNameWaf(const AddCNameWafRequestType& req,
          AddCNameWafResponseType* resp,
          AliYundunErrorInfo* error_info);

  int BruteforceLog(const BruteforceLogRequestType& req,
          BruteforceLogResponseType* resp,
          AliYundunErrorInfo* error_info);

  int CloseCCProtect(const CloseCCProtectRequestType& req,
          CloseCCProtectResponseType* resp,
          AliYundunErrorInfo* error_info);

  int ClosePortScan(const ClosePortScanRequestType& req,
          ClosePortScanResponseType* resp,
          AliYundunErrorInfo* error_info);

  int CloseVulScan(const CloseVulScanRequestType& req,
          CloseVulScanResponseType* resp,
          AliYundunErrorInfo* error_info);

  int ConfigDdos(const ConfigDdosRequestType& req,
          ConfigDdosResponseType* resp,
          AliYundunErrorInfo* error_info);

  int ConfirmLogin(const ConfirmLoginRequestType& req,
          ConfirmLoginResponseType* resp,
          AliYundunErrorInfo* error_info);

  int DdosFlowGraph(const DdosFlowGraphRequestType& req,
          DdosFlowGraphResponseType* resp,
          AliYundunErrorInfo* error_info);

  int DdosLog(const DdosLogRequestType& req,
          DdosLogResponseType* resp,
          AliYundunErrorInfo* error_info);

  int DeleteBackDoorFile(const DeleteBackDoorFileRequestType& req,
          DeleteBackDoorFileResponseType* resp,
          AliYundunErrorInfo* error_info);

  int DeleteCNameWaf(const DeleteCNameWafRequestType& req,
          DeleteCNameWafResponseType* resp,
          AliYundunErrorInfo* error_info);

  int DetectVulById(const DetectVulByIdRequestType& req,
          DetectVulByIdResponseType* resp,
          AliYundunErrorInfo* error_info);

  int DetectVulByIp(const DetectVulByIpRequestType& req,
          DetectVulByIpResponseType* resp,
          AliYundunErrorInfo* error_info);

  int GetDdosConfigOptions(const GetDdosConfigOptionsRequestType& req,
          GetDdosConfigOptionsResponseType* resp,
          AliYundunErrorInfo* error_info);

  int ListInstanceInfos(const ListInstanceInfosRequestType& req,
          ListInstanceInfosResponseType* resp,
          AliYundunErrorInfo* error_info);

  int LogineventLog(const LogineventLogRequestType& req,
          LogineventLogResponseType* resp,
          AliYundunErrorInfo* error_info);

  int OpenCCProtect(const OpenCCProtectRequestType& req,
          OpenCCProtectResponseType* resp,
          AliYundunErrorInfo* error_info);

  int OpenPortScan(const OpenPortScanRequestType& req,
          OpenPortScanResponseType* resp,
          AliYundunErrorInfo* error_info);

  int OpenVulScan(const OpenVulScanRequestType& req,
          OpenVulScanResponseType* resp,
          AliYundunErrorInfo* error_info);

  int QueryDdosConfig(const QueryDdosConfigRequestType& req,
          QueryDdosConfigResponseType* resp,
          AliYundunErrorInfo* error_info);

  int SecureCheck(const SecureCheckRequestType& req,
          SecureCheckResponseType* resp,
          AliYundunErrorInfo* error_info);

  int ServiceStatus(const ServiceStatusRequestType& req,
          ServiceStatusResponseType* resp,
          AliYundunErrorInfo* error_info);

  int SetDdosAuto(const SetDdosAutoRequestType& req,
          SetDdosAutoResponseType* resp,
          AliYundunErrorInfo* error_info);

  int SetDdosQps(const SetDdosQpsRequestType& req,
          SetDdosQpsResponseType* resp,
          AliYundunErrorInfo* error_info);

  int Summary(const SummaryRequestType& req,
          SummaryResponseType* resp,
          AliYundunErrorInfo* error_info);

  int VulScanLog(const VulScanLogRequestType& req,
          VulScanLogResponseType* resp,
          AliYundunErrorInfo* error_info);

  int WafInfo(const WafInfoRequestType& req,
          WafInfoResponseType* resp,
          AliYundunErrorInfo* error_info);

  int WafLog(const WafLogRequestType& req,
          WafLogResponseType* resp,
          AliYundunErrorInfo* error_info);

  int WebshellLog(const WebshellLogRequestType& req,
          WebshellLogResponseType* resp,
          AliYundunErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
