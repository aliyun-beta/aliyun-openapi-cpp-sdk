#ifndef ALI_RAM_SET_SECURITY_PREFERENCE_TYPESH
#define ALI_RAM_SET_SECURITY_PREFERENCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamSetSecurityPreferenceRequestType {
  std::string enable_save_mf_aticket;
};
struct RamSetSecurityPreferenceLoginProfilePreferenceType {
  bool enable_save_mf_aticket;
};
struct RamSetSecurityPreferenceSecurityPreferenceType {
  RamSetSecurityPreferenceLoginProfilePreferenceType login_profile_preference;
};
struct RamSetSecurityPreferenceResponseType {
  RamSetSecurityPreferenceSecurityPreferenceType security_preference;
};
} // end namespace
#endif
