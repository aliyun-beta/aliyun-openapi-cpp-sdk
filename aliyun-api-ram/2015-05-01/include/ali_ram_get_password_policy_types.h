#ifndef ALI_RAM_GET_PASSWORD_POLICY_TYPESH
#define ALI_RAM_GET_PASSWORD_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetPasswordPolicyPasswordPolicyType {
  int minimum_password_length;
  bool require_lowercase_characters;
  bool require_uppercase_characters;
  bool require_numbers;
  bool require_symbols;
};
struct RamGetPasswordPolicyResponseType {
  RamGetPasswordPolicyPasswordPolicyType password_policy;
};
} // end namespace
#endif
