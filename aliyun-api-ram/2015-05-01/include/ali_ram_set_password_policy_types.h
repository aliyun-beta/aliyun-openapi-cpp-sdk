#ifndef ALI_RAM_SET_PASSWORD_POLICY_TYPESH
#define ALI_RAM_SET_PASSWORD_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamSetPasswordPolicyRequestType {
  std::string minimum_password_length;
  std::string require_lowercase_characters;
  std::string require_uppercase_characters;
  std::string require_numbers;
  std::string require_symbols;
};
struct RamSetPasswordPolicyPasswordPolicyType {
  int minimum_password_length;
  bool require_lowercase_characters;
  bool require_uppercase_characters;
  bool require_numbers;
  bool require_symbols;
};
struct RamSetPasswordPolicyResponseType {
  RamSetPasswordPolicyPasswordPolicyType password_policy;
};
} // end namespace
#endif
