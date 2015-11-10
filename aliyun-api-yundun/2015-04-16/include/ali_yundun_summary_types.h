#ifndef ALI_YUNDUN_SUMMARY_TYPESH
#define ALI_YUNDUN_SUMMARY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunSummaryRequestType {
  std::string jst_owner_id;
  std::string instance_ids;
};
struct YundunSummaryDdosType {
  long count;
  long host_count;
};
struct YundunSummaryBruteForceType {
  long count;
  long host_count;
};
struct YundunSummaryWebshellType {
  long count;
  long host_count;
};
struct YundunSummaryRemoteLoginType {
  long count;
  long host_count;
};
struct YundunSummaryWebAttackType {
  long count;
  long host_count;
};
struct YundunSummaryWebLeakType {
  long count;
  long host_count;
};
struct YundunSummaryResponseType {
  YundunSummaryDdosType ddos;
  YundunSummaryBruteForceType brute_force;
  YundunSummaryWebshellType webshell;
  YundunSummaryRemoteLoginType remote_login;
  YundunSummaryWebAttackType web_attack;
  YundunSummaryWebLeakType web_leak;
  long status;
  long abnormal_host_count;
};
} // end namespace
#endif
