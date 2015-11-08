#ifndef ALIYUNAPICORE_HTTP_ALIHTTPRESPONSE_HPP
#define ALIYUNAPICORE_HTTP_ALIHTTPRESPONSE_HPP
#include <string>
class AliConnection {
public:
  virtual int Connect() = 0;
  virtual int Send(char* data, int len) = 0;
  virtual int Read(char* data, int len) = 0;
  virtual void Close() = 0;
};
#endif //ALIYUNAPICORE_HTTP_ALIHTTPRESPONSE_HPP
