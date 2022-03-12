
//https://stackoverflow.com/questions/46626660/getaddrinfo-and-inaddr-any


#include "http_parser.h"

// dont want to use strcopy for security reasons?

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

http_parser_settings settings;

//
const char* html(){
  char* html = "<!DOCTYPE html><body><h1>Grepet.com</h1><p>Hi Guys!</p></body></html>\r\n";
  return html;
  }

void myparser(char* buffer_pointer){
    char str[2048], *s = str, *t = NULL;
    /*Problem with strcpy(): The strcpy() function does not specify the size of the destination array, so buffer overrun is often a risk. Using strcpy() function to copy a large character array into a smaller one is dangerous, but if the string will fit, then it will not be worth the risk. If the destination string is not large enough to store the source string then the behavior of strcpy() is unspecified or undefined. https://www.geeksforgeeks.org/why-strcpy-and-strncpy-are-not-safe-to-use/*/
    strncpy(str, buffer_pointer,2000);
//            while ((t = strtok(s, " ")) != NULL) {
//                s = NULL;
//                //PRINTS PARSED REQUEST BODY
//                 printf("%s\n", t);
//             }
    printf("\n");
    while ((t = strtok(s, "\t\n")) != NULL) {
        s = NULL;
        //PRINTS PARSED REQUEST BODY
        printf("%s\n", t);
        printf("\n");
        }
    }
int server() {
    char headers[] = "HTTP/1.0 200 OK\r\nServer: Grepet\r\nContent-type:text/html\r\n\r\n";
    char buffer[2048];
    char *buffer_pointer = &buffer[0];
    char data[2048] = {0};
    snprintf(data, sizeof data,"%s %s", headers, html());
    struct linger sl; //calling existing struct
    sl.l_onoff=1;
    sl.l_linger=0;
    //SO_LINGER
    struct Vars{ // creating new struct
        int bindstatus;
        int clientque;
        int speed;
    };
    
    struct addrinfo hints;
    struct addrinfo *server;
   // memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    struct sockaddr_storage client_addr;
    socklen_t addr_size = sizeof client_addr;

    struct Vars my; //calling existing struct
    my.bindstatus = 1000;
    //setblocking(sockfd,0);

    int sockfd;
    if (getaddrinfo(NULL, "5432", &hints, &server) == 0)
        //printf("test1 pass");
    {
    for (struct addrinfo *addr = server; addr != NULL; addr = addr->ai_next)
    {
            //printf("test2 pass");
            sockfd = socket(addr->ai_family, addr->ai_socktype, addr->ai_protocol);
            //printf("hi");
        if (sockfd > 0)
            {
                setsockopt(sockfd,SOL_SOCKET, SO_REUSEADDR,&sl,sizeof(sl));
                //addr.sin_addr.s_addr = INADDR_ANY;
                if ((my.bindstatus = bind(sockfd, addr->ai_addr, (int)addr->ai_addrlen)) != 0)
                {
                    perror("can't bind port");
                    abort();
                }
                if ( listen(sockfd, my.clientque)  != 0 )
                {
                    perror("Can't configure listening port");
                    abort();
                }
                if ( my.bindstatus == 0 )
                {
                    printf("BOUND TO ALL SOCKETS\n");
                }
                // store listenSocket in a list for later use...
            }
        }
        freeaddrinfo(server);
    }
    //further error checking to close program
    if (my.bindstatus < 0) { return 0; }
    
    my.clientque = 128;
    my.speed = 0;
    //int system(const char *"bash\ test.sh");
    system("bash test2.sh");
    printf("hi");
    while(1) {
        int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
        if (client_fd > 0) {
            int request_size = read(client_fd, buffer, 2048);
            // printf("%d\n", request_size);
            // printf("%d\n", client_fd);
            myparser(buffer_pointer);
            
            fflush(stdout);
            int response_size = send(client_fd, data, strlen(data),0);
            //printf("%d", n);
            //printf("%s", data);
            my.speed = my.speed + 1;
            printf("%d\n requests", my.speed);
            }
        close(client_fd);
    }
    close(sockfd);
    return 0;
}


int main(int argc, char** argv){
    server();
    printf("calltest");
//#include <pthread.h>https://www.geeksforgeeks.org/multithreading-c-2/
    exit(1);
		
}

