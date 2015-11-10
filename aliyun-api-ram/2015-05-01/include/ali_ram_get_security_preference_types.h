#ifndef ALI_RAM_GET_SECURITY_PREFERENCE_TYPESH
#define ALI_RAM_GET_SECURITY_PREFERENCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetSecurityPreferenceRequestType {
};
struct RamGetSecurityPreferenceLoginProfilePreferenceType {
  bool enable_save_mf_aticket;
};
struct RamGetSecurityPreferenceSecurityPreferenceType {
  RamGetSecurityPreferenceLoginProfilePreferenceType login_profile_preference;
};
struct RamGetSecurityPreferenceResponseType {
  RamGetSecurityPreferenceSecurityPreferenceType security_preference;
};
} // end namespace
#endif
