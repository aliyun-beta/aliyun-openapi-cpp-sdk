#include "ali_tcp_connection.h"
#include "ali_sys_network.h"
#include <stdio.h>
#include <string.h>


/// todo:move to cutils
static int resolve_dns(const char * host, int port, sockaddr* addr){
    struct addrinfo hints, *res, *res0;
    char sz_port[32] = {0};
    snprintf(sz_port, sizeof(sz_port), "%d", port);
    memset(&hints, 0, sizeof(hints));
    hints.ai_family   = PF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags    = AI_PASSIVE;
    
    int ret = getaddrinfo(host, sz_port, &hints, &res0);
    if (ret != 0) {
      return -1;
    }
    
    for(res = res0; res; res = res->ai_next){
        if(res->ai_family == AF_INET){
          sockaddr_in* addr_in = (sockaddr_in*)res->ai_addr;
          memcpy(addr, res->ai_addr, sizeof(sockaddr_in));
         
          break;
        }else if(res->ai_family == AF_INET6){
          freeaddrinfo(res0);
          return -1;
        }
    }
    freeaddrinfo(res0);
    return 0;
}

AliTcpConnection::AliTcpConnection(std::string host, int port) :
                                    fd_(0),
                                    host_(host),
                                    port_(port) {
}

int AliTcpConnection::Connect() {
  fd_ = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  sockaddr_in addr = {};
  if(resolve_dns(host_.c_str(), port_, (sockaddr*)&addr) != 0) {\
    goto err_failed;
  }

  return ::connect(fd_, (sockaddr*)&addr, sizeof(sockaddr_in));
err_failed:
  return -1;
}

int AliTcpConnection::Send(char* data, int len) {
  return ::send(fd_, data, len, 0);
}
int AliTcpConnection::Read(char* data, int len) {
  return ::recv(fd_, data, len, 0);
}
void AliTcpConnection::Close() {
  if(fd_) {
#ifdef WIN32
    closesocket(fd_);
#else
    ::close(fd_);
#endif
  }

  delete this;
  return;
}