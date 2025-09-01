#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PORT 8080
void handle_get(void *arg) {
  
}

int main(int argc, char *argv[]) {
  int sockfd;
  struct sockaddr_in serv_addr;
  if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    return -1;
  }

  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr,s_addr = INADDR_ANY;
  serv_addr.sin_port = htons(8080)

  return 0;
}
