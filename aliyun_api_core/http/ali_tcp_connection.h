#ifndef ALIYUNAPICORE_HTTP_ALITCPCONNECTION_H
#define ALIYUNAPICORE_HTTP_ALITCPCONNECTION_H
#include <string>
#include "ali_connection.h"

class AliTcpConnection : public AliConnection {
public:
  AliTcpConnection(std::string host, int port);
  virtual int Connect();
  virtual int Send(char* data, int len);
  virtual int Read(char* data, int len);
  virtual void Close();
private:
  int fd_;
  std::string host_;
  int port_;

};
#endif