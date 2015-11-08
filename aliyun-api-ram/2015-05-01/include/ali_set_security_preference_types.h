#ifndef ALI_SET_SECURITY_PREFERENCE_TYPESH
#define ALI_SET_SECURITY_PREFERENCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetSecurityPreferenceRequestType {
  std::string enable_save_mf_aticket;
};
struct SetSecurityPreferenceLoginProfilePreferenceType {
  bool enable_save_mf_aticket;
};
struct SetSecurityPreferenceSecurityPreferenceType {
  SetSecurityPreferenceLoginProfilePreferenceType login_profile_preference;
};
struct SetSecurityPreferenceResponseType {
  SetSecurityPreferenceSecurityPreferenceType security_preference;
};
} // end namespace
#endif
