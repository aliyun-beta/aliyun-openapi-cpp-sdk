#include "ali_string_utils.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
std::string get_format_string(const char * format, ...) {
  std::string res;
  char buf[4096] = {};
  char* backup_buf = NULL;
  int cur_buf_len = sizeof(buf);
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, cur_buf_len, format, ap);
  while(len >= cur_buf_len) {
    cur_buf_len *= 2;
    if(backup_buf) {
      free(backup_buf);
    }

    backup_buf = (char*)calloc(1, cur_buf_len * 2);
    len = vsnprintf(buf, sizeof(buf), format, ap);
  }
  va_end(ap);

  if(backup_buf) {
    res =backup_buf;
    free(backup_buf);
  } else {
    res = buf;
  }
  return res;
}

void append_format_string(std::string& data, const char* format, ...) {
  char buf[4096] = {};
  char* backup_buf = NULL;
  int cur_buf_len = sizeof(buf);
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, cur_buf_len, format, ap);
  while(len >= cur_buf_len) {
    cur_buf_len *= 2;
    if(backup_buf) {
      free(backup_buf);
    }

    backup_buf = (char*)calloc(1, cur_buf_len * 2);
    len = vsnprintf(buf, sizeof(buf), format, ap);
  }
  va_end(ap);

  if(backup_buf) {
    data.append(backup_buf);
    free(backup_buf);
  } else {
    data.append(buf);
  }  
}

void strsplit(const std::string& str, std::vector<std::string>& ret, std::string sep)
{
  if (str.empty())
    return;

  std::string tmp;  
  std::string::size_type pos_begin = str.find_first_not_of(sep);  
  std::string::size_type comma_pos = 0;  

  while (pos_begin != std::string::npos) {
    comma_pos = str.find(sep, pos_begin);  
    if (comma_pos != std::string::npos) {
      tmp = str.substr(pos_begin, comma_pos - pos_begin);
      pos_begin = comma_pos + sep.length();
    }
    else {
      tmp = str.substr(pos_begin);
      pos_begin = comma_pos;
    }
    if (!tmp.empty()) {
      ret.push_back(tmp);
      tmp.clear();
    }
  }
}

std::string str_replace(const std::string& input, std::string to_replace, std::string replaced) {
  std::string str;
   while(true)   {   
        std::string::size_type   pos(0);   
        if((pos=str.find(to_replace)) != std::string::npos) {
          str.replace(pos,to_replace.length(),replaced);
        } else {
          break;   
        } 
    }   
    return str;
}