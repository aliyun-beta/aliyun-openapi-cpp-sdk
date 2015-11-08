#ifndef ALI_SUMMARY_TYPESH
#define ALI_SUMMARY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SummaryRequestType {
  std::string jst_owner_id;
  std::string instance_ids;
};
struct SummaryDdosType {
  long count;
  long host_count;
};
struct SummaryBruteForceType {
  long count;
  long host_count;
};
struct SummaryWebshellType {
  long count;
  long host_count;
};
struct SummaryRemoteLoginType {
  long count;
  long host_count;
};
struct SummaryWebAttackType {
  long count;
  long host_count;
};
struct SummaryWebLeakType {
  long count;
  long host_count;
};
struct SummaryResponseType {
  SummaryDdosType ddos;
  SummaryBruteForceType brute_force;
  SummaryWebshellType webshell;
  SummaryRemoteLoginType remote_login;
  SummaryWebAttackType web_attack;
  SummaryWebLeakType web_leak;
  long status;
  long abnormal_host_count;
};
} // end namespace
#endif
