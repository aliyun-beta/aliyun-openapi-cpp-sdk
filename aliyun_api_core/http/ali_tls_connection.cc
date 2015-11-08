#include "ali_tls_connection.h"
#include "ali_sys_network.h"
#include <string.h>
AliTlsConnection::AliTlsConnection(std::string host, int port) {
  this->host_ = host;
  this->port_ = port;
}

int AliTlsConnection::Connect() {
  
  char sz_port[16] = {};
  const char *pers = "ssl_client_aliyun";
  int ret;
  int flags;
  snprintf(sz_port, sizeof(sz_port), "%d", this->port_);
  mbedtls_net_init( &server_fd_ );
  mbedtls_ssl_init( &ssl_ );
  mbedtls_ssl_config_init( &conf_ );
  mbedtls_x509_crt_init( &cacert_ );
  mbedtls_ctr_drbg_init( &ctr_drbg_ );
  mbedtls_entropy_init( &entropy_ );

  if( ( ret = mbedtls_ctr_drbg_seed( &ctr_drbg_, mbedtls_entropy_func, &entropy_,
                               (const unsigned char *) pers,
                               strlen( pers ) ) ) != 0 )
  {
        return -1;
  }


  ret = mbedtls_x509_crt_parse( &cacert_, (const unsigned char *) mbedtls_test_cas_pem,
                          mbedtls_test_cas_pem_len );
  if( ret < 0 )
  {
      return -1;
  }

  if( ( ret = mbedtls_net_connect(&server_fd_, host_.c_str(), sz_port, MBEDTLS_NET_PROTO_TCP ) ) != 0 )
  {
      return -1;
  }
  
  if( ( ret = mbedtls_ssl_config_defaults( &conf_,
                    MBEDTLS_SSL_IS_CLIENT,
                    MBEDTLS_SSL_TRANSPORT_STREAM,
                    MBEDTLS_SSL_PRESET_DEFAULT ) ) != 0 )
  {
      return -1;
  }

  mbedtls_ssl_conf_authmode( &conf_, MBEDTLS_SSL_VERIFY_OPTIONAL );
  mbedtls_ssl_conf_ca_chain( &conf_, &cacert_, NULL );
  mbedtls_ssl_conf_rng( &conf_, mbedtls_ctr_drbg_random, &ctr_drbg_ );

  if( ( ret = mbedtls_ssl_setup( &ssl_, &conf_ ) ) != 0 )
  {
      return -1;
  }

  if( ( ret = mbedtls_ssl_set_hostname( &ssl_, "mbed TLS Server 1" ) ) != 0 )
  {
      return -1;
  }

  mbedtls_ssl_set_bio( &ssl_, &server_fd_, mbedtls_net_send, mbedtls_net_recv, NULL );
  while( ( ret = mbedtls_ssl_handshake( &ssl_ ) ) != 0 )
  {
      if( ret != MBEDTLS_ERR_SSL_WANT_READ && ret != MBEDTLS_ERR_SSL_WANT_WRITE )
      {
          return -1;
      }
  }

  return 0;
}

int AliTlsConnection::Send(char* data, int len) {
  return mbedtls_ssl_write(&ssl_, (const unsigned char*)data, len);
}
int AliTlsConnection::Read(char* data, int len) {
  return mbedtls_ssl_read(&ssl_, (unsigned char*)data, len);
}
void AliTlsConnection::Close() {
  mbedtls_net_free( &server_fd_ );
  mbedtls_ssl_free( &ssl_ );
  mbedtls_ssl_config_free( &conf_ );
  mbedtls_x509_crt_free( &cacert_ );
  mbedtls_ctr_drbg_free( &ctr_drbg_ );
  mbedtls_entropy_free( &entropy_ );
  delete this;
}