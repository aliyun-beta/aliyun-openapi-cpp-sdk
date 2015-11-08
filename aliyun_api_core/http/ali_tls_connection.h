#ifndef ALIYUNAPICORE_HTTP_ALITLSCONNECTION_H
#define ALIYUNAPICORE_HTTP_ALITLSCONNECTION_H
#include <string>

#include "ali_connection.h"
#include "mbedtls/ssl.h"
#include "mbedtls/net.h"
#include "mbedtls/debug.h"
#include "mbedtls/ssl.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/error.h"
#include "mbedtls/certs.h"
#include "mbedtls/timing.h"

class AliTlsConnection : public AliConnection {
public:
  AliTlsConnection(std::string host, int port);
  virtual int Connect();
  virtual int Send(char* data, int len);
  virtual int Read(char* data, int len);
  virtual void Close();
private:
  int fd_;
  std::string host_;
  int port_;
  mbedtls_net_context server_fd_;
  mbedtls_entropy_context entropy_;
  mbedtls_ctr_drbg_context ctr_drbg_;
  mbedtls_ssl_context ssl_;
  mbedtls_ssl_config conf_;
  mbedtls_x509_crt cacert_;

};
#endif
