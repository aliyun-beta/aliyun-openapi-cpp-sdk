#include "ali_log.h"
#include <stdarg.h>
#include <stdio.h>
void ali_log_write(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  static char log_message[2048] = {};
  vsnprintf(log_message, sizeof(log_message), fmt, ap);
  fprintf(stderr, "%s\n", log_message);
  va_end(ap);
}