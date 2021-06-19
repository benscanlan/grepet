#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close
#

//so clean commit
//function server()
//funtion GET
//function POST
//function readfile()
//function writefile()

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

int server() {
    struct addrinfo hints, *server;
    memset(&hints, 0, sizeof hints);
    hints.ai_family =  AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;  //SOCK_NONBLOCK;
    char* grepetcom = NULL; //www.grepet.com
    getaddrinfo(grepetcom, "80", &hints, &server);
    
    struct sockaddr_storage client_addr;
    socklen_t addr_size = sizeof client_addr;
    char headers[] = "HTTP/1.0 200 OK\r\nServer: CPi\r\nContent-type:text/html\r\n\r\n";
    char buffer[2048];
    char html[] = "<html><head><title>Temperature</title></head><body>{\"humidity\":81%,\"airtemperature\":23.5C}</p></body></html>\r\n";
    char data[2048] = {0};
    snprintf(data, sizeof data,"%s %s", headers, html);

    int sockfd = socket(server->ai_family, server->ai_socktype, server->ai_protocol);
    bind(sockfd, server->ai_addr, server->ai_addrlen);
    listen(sockfd, 10);
    
    while(1) {
        int client_fd = accept(sockfd,(struct sockaddr *) &client_addr, &addr_size);
        if (client_fd > 0) {
            int n = read(client_fd, buffer, 2048);
            printf("%s", buffer);
            fflush(stdout);
            n = write(client_fd, data, strlen(data));
            close(client_fd);
        }
    }
 return (EXIT_SUCCESS);
}
int main(int argc, char** argv){
    server();
    return 0;
}
