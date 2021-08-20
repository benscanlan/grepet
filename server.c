//https://hea-www.harvard.edu/~fine/Tech/addrinuse.html
// goal build functionality like service httpd graceful restart not loose conections
//A graceful restart tells the web sever to finish any active connections before restarting thats all tho
//input output
#include <stdio.h>
#include <stdlib.h>
//data types
#include <string.h>
//server()
#include <sys/select.h>
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
    //hints.ai_flags = SO_LINGER; //SOCK_NONBLOCK || SO_REUSEADDR; //|| //unused

    char* grepetcom = NULL; //www.grepet.com
    getaddrinfo(grepetcom, "80", &hints, &server); //run as sudo 80
    struct sockaddr_storage client_addr;
    socklen_t addr_size = sizeof client_addr;
    char headers[] = "HTTP/1.0 200 OK\r\nServer: Grepet\r\nContent-type:text/html\r\n\r\n";
    char buffer[2048];
    char data[2048] = {0};
    snprintf(data, sizeof data,"%s %s", headers, html());
    int sockfd = socket(server->ai_family, server->ai_socktype, server->ai_protocol);
    //setsockopt(sockfd,SOCK_NONBLOCK ,SO_REUSEADDR,0,sizeof(int));//1
    //setsockopt(sockfd,SOCK_NONBLOCK ,SO_LINGER,0,sizeof(int));//1
    //int setsockopt(int socket, int level, int option_name,const void *option_value, socklen_t option_len);
    struct linger sl;
    sl.l_onoff=1;
    sl.l_linger=0;
    //SO_LINGER
    setsockopt(sockfd,SOL_SOCKET, SO_REUSEADDR,&sl,sizeof(sl));
    //setblocking(sockfd,0);
    int g = bind(sockfd, server->ai_addr, server->ai_addrlen);
    printf("%d\n",g);
    if (g < 0) { return 0; }
    listen(sockfd, 1); //blocking
    int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
    read(client_fd, buffer, 2048);
    fflush(stdout);
    send(client_fd, data, strlen(data),0);
    fflush(stdout);
    //shutdown(sockfd, SHUT_WR);
    //close(client_fd);
    close(sockfd);


    //close(client_fd);
    //shutdown(1,1);
    return 0;


}
int main(int argc, char** argv){
    server();
    exit(1);
}
