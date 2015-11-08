#ifndef ALI_GET_SECURITY_PREFERENCE_TYPESH
#define ALI_GET_SECURITY_PREFERENCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetSecurityPreferenceRequestType {
};
struct GetSecurityPreferenceLoginProfilePreferenceType {
  bool enable_save_mf_aticket;
};
struct GetSecurityPreferenceSecurityPreferenceType {
  GetSecurityPreferenceLoginProfilePreferenceType login_profile_preference;
};
struct GetSecurityPreferenceResponseType {
  GetSecurityPreferenceSecurityPreferenceType security_preference;
};
} // end namespace
#endif
