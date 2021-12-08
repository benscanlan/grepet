

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

int readfile() { //needs to constantly look for and remove bad data that can cause read issues

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
    //hints.ai_flags = //unused

    char* grepetcom = NULL; //www.grepet.com
    getaddrinfo(grepetcom, "80", &hints, &server); //run as sudo 80
    struct sockaddr_storage client_addr;
    socklen_t addr_size = sizeof client_addr;
    char headers[] = "HTTP/1.0 200 OK\r\nServer: Grepet\r\nContent-type:text/html\r\n\r\n";
    char buffer[2048];
    char data[2048] = {0};
    snprintf(data, sizeof data,"%s %s", headers, html());
    int sockfd = socket(server->ai_family, server->ai_socktype, server->ai_protocol);
    //int setsockopt(int socket, int level, int option_name,const void *option_value, socklen_t option_len);
    struct linger sl; //calling existing struct
    sl.l_onoff=1;
    sl.l_linger=0;
    //SO_LINGER
    struct Vars{ // creating new struct
        int bindstatus;
        int clientque;
        int speed;
    };
    struct Vars my; //calling existing struct
    setsockopt(sockfd,SOL_SOCKET, SO_REUSEADDR,&sl,sizeof(sl));
    //setblocking(sockfd,0);
    my.bindstatus = bind(sockfd, server->ai_addr, server->ai_addrlen);
    printf("%d\n",my.bindstatus);
    if (my.bindstatus < 0) { return 0; }
    my.clientque = 128;
    listen(sockfd, my.clientque);
    my.speed = 0;
    while(1) {
        int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
        if (client_fd > 0) {
            int request_size = read(client_fd, buffer, 2048);



            // printf("%d\n", request_size);
            // printf("%d\n", client_fd);
            printf("%s\n", buffer);
            // 
            //get first line of buffer
            char request_line1[512];
            for(int i = 0; i < strlen(buffer); i++)
            {
                if (buffer[i]== '\n') 
                {
                    for(int j=0; j <= i; j++)
                    {
                            //printf("%c", buffer[j]);
                            request_line1[j] = buffer[j];
                    }
                    request_line1[i+1]='\0';
                    break;
                }
            }
            printf("%s\n", request_line1);
            
            
            char request_path[256];
            int i = 0;
            //if (request_line1[i]=='G' && request_line1[i+1]=='E' && request_line1[i+2]=='T' && request_line1[i+3]==' ')
            int start = 0;
            int end = 0;
            for(int i = 0; i < strlen(request_line1); i++)
            {
                if (buffer[i]== ' ')
                {
                    start = i+1;
                    for(i=start; i < strlen(request_line1); i++)
                    {
                        if (buffer[i]== ' ')
                        {
                            end = i-1;
                        }

                    }
                }
            }

            for(int j = start; j <= end; j++)
            {
                request_path[j-4] = request_line1[j];
            }
            request_path[end-3]='\0';
            printf("%s\n", request_path);
            
            fflush(stdout);
            int response_size = send(client_fd, data, strlen(data),0);
            //printf("%d", n);
            //printf("%s", data);
            my.speed = my.speed + 1;
            printf("%d\n", my.speed);
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

