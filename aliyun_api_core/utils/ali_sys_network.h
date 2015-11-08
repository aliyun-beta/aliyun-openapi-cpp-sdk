#ifndef ALIYUNAPICORE_UTILS_SYS_NETWORK_H
#define ALIYUNAPICORE_UTILS_SYS_NETWORK_H
#ifndef WIN32
#include <netdb.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#else
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#define  snprintf _snprintf
#endif
#endif
