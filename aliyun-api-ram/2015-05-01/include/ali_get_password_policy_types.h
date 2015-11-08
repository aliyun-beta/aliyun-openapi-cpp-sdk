#ifndef ALI_GET_PASSWORD_POLICY_TYPESH
#define ALI_GET_PASSWORD_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetPasswordPolicyRequestType {
};
struct GetPasswordPolicyPasswordPolicyType {
  int minimum_password_length;
  bool require_lowercase_characters;
  bool require_uppercase_characters;
  bool require_numbers;
  bool require_symbols;
};
struct GetPasswordPolicyResponseType {
  GetPasswordPolicyPasswordPolicyType password_policy;
};
} // end namespace
#endif
