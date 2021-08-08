//input output
#include <stdio.h>
#include <stdlib.h>
//data types
#include <string.h>
//server()
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
//#include <fcntl.h> // for open
#include <unistd.h> // for close
//encryption algos
//#include <openssl/md5.h> //https://github.com/coturn/coturn/issues/242

#ifndef SOCK_NONBLOCK
#include <fcntl.h>
# define SOCK_NONBLOCK O_NONBLOCK
#endif
#include <stdbool.h>

const char* html(){
  char* html = "<!DOCTYPE html><body><h1>Grepet.com</h1><p>Hi Guys!</p></body></html>\r\n";
  return html;
  }


int server() {
    struct addrinfo hints, *server;
    memset(&hints, 0, sizeof hints);
    hints.ai_family =  AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = SOCK_NONBLOCK || SO_REUSEADDR; //||

    char* grepetcom = NULL; //www.grepet.com
    getaddrinfo(grepetcom, "80", &hints, &server); //run as sudo 80
    struct sockaddr_storage client_addr;
    socklen_t addr_size = sizeof client_addr;
    char headers[] = "HTTP/1.0 200 OK\r\nServer: Grepet\r\nContent-type:text/html\r\n\r\n";
    char buffer[2048];
    char data[2048] = {0};
    snprintf(data, sizeof data,"%s %s", headers, html());
    int sockfd = socket(server->ai_family, server->ai_socktype, server->ai_protocol);
    setsockopt(sockfd,SOL_SOCKET,SO_REUSEADDR,0,sizeof(int));//1
    int g = bind(sockfd, server->ai_addr, server->ai_addrlen);
    printf("%d\n",g);
    system("curl localhost");
    listen(sockfd, 1); //blocking
    int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
    if (client_fd > 0) {
        read(client_fd, buffer, 2048);
        close(sockfd);
        fflush(stdout);
        send(client_fd, data, strlen(data),0);
      }
    close(client_fd);
    return 0;
    //}
}
int main(int argc, char** argv){
    server();
    exit(1);
}
