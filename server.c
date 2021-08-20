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

int readfile() {
  // printf() displays the string inside quotation
  printf("enter a number like 1");
  char buf[10];
  fgets(buf,10,stdin);
  printf("%s", buf);
  //takes newline out of buffer read in https://stackoverflow.com/questions/2693776
  buf[strcspn(buf, "\n")] = 0;
  //int article = 1;
  //returns a filecontents
  FILE *filePointer ;
  char dataToBeRead[50]; // can ask for size ahead of time of file for best memory ussage
  char route[80];
  strcpy (route, "./articles/");
  strcat (route, buf);
  strcat (route, ".html");
  printf("%s", route);
  filePointer = fopen(route, "r") ;

  //check if the file pointer is null if null route cannot be resolved send 404 page error code
  if ( filePointer == NULL ) {
    printf( "404 file failed to open." ) ;
    }
  else {
      //The file is now opened
      while( fgets ( dataToBeRead, 50, filePointer ) != NULL ) { // using fgets() method fgets line by line
         printf( "%s" , dataToBeRead ) ; // Print the dataToBeRead
         }
        fclose(filePointer) ;
        //the file is now closed
    }
    return 0;
}



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
    struct linger sl; //calling existing struct
    sl.l_onoff=1;
    sl.l_linger=0;
    //SO_LINGER
    struct Vars{ // creating new struct
        int bindstatus;
        int clientque;
    };
    struct Vars my; //calling existing struct
    setsockopt(sockfd,SOL_SOCKET, SO_REUSEADDR,&sl,sizeof(sl));
    //setblocking(sockfd,0);
    my.bindstatus = bind(sockfd, server->ai_addr, server->ai_addrlen);
    printf("%d\n",my.bindstatus);
    if (my.bindstatus < 0) { return 0; }
    my.clientque = 128;
    listen(sockfd, my.clientque);
    int i = 0;
    while(1) {
        
        int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
        if (client_fd > 0) {
            int n = read(client_fd, buffer, 2048);
            //printf("%d", n);
            printf("%s", buffer);
            fflush(stdout);
            n = send(client_fd, data, strlen(data),0);
            printf("%d", n);
            // hangs on write() socket bug here
            printf("%s", data);
            //shutdown(client_fd, SHUT_RDWR);
            i = i + 1;
            printf("%d\n", i);
            }
        close(client_fd);
    }
    close(sockfd);
    return 0;
}
int main(int argc, char** argv){
    server();
    exit(1);
}
