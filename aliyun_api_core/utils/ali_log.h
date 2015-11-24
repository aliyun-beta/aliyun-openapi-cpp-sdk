#ifndef ALILOG_H
#define ALILOG_H

enum {
  LOG_INFO,
  LOG_WARNNING,
  LOG_ERROR
};

#ifdef DEBUG
#define ALI_LOG ali_log_write
#else
#define ALI_LOG(msg, ...)
#endif // DEBUG
void ali_log_write(const char *fmt, ...)
#if defined(__GNUC__)
  __attribute__ (( format (printf, 1, 2) ))
#endif
;
#endif // ALILOG_H