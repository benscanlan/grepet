//cTops.c
//while (Listen)
//    function 1
//             2
//             3
//     respond

#include "headers.h"
#define SERVER_PORT 8001
#define MAX_PENDING 10
void setHttpHeader(char httpHeader[])
{
    // File object to return
    FILE *htmlData = fopen("index.html", "r");

    char line[100];
    char responseData[8000];
    while (fgets(line, 100, htmlData) != 0) {
        strcat(responseData, line);
    }
    // char httpHeader[8000] = "HTTP/1.1 200 OK\r\n\n";
    strcat(httpHeader, responseData);
}
void report(struct sockaddr_in *serverAddress)
  {
      char hostBuffer[INET6_ADDRSTRLEN];
      char serviceBuffer[NI_MAXSERV]; // defined in `<netdb.h>`
      socklen_t addr_len = sizeof(*serverAddress);
      int err = getnameinfo(
          (struct sockaddr *) serverAddress,
          addr_len,
          hostBuffer,
          sizeof(hostBuffer),
          serviceBuffer,
          sizeof(serviceBuffer),
          NI_NUMERICHOST
      );
      if (err != 0) {
          printf("It's not working!!\n");
      }
      printf("\n\n\tServer listening on http://%s:%s\n", hostBuffer, serviceBuffer);
  }



int main() {
    char httpHeader[8000] = "HTTP/1.1 200 OK\r\n\n";

    int serverSocket = socket(AF_INET,SOCK_STREAM,0);
    //int socket = getaddrinfo(NULL, port, &hints, &result)) != 0
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(SERVER_PORT);
    serverAddress.sin_addr.s_addr = htonl(INADDR_LOOPBACK);//inet_addr("127.0.0.1");

    bind(serverSocket,(struct sockaddr *) &serverAddress,sizeof(serverAddress));
    if (listen(serverSocket, MAX_PENDING) == -1){
      //perror("stream-talk-server: listen");
      close(serverSocket);
      return 1;
    }
    report(&serverAddress);
    setHttpHeader(httpHeader);
    int clientSocket;
    while(1)
    {
        clientSocket = accept(serverSocket, NULL, NULL);
        send(clientSocket, httpHeader, sizeof(httpHeader), 0);
        close(clientSocket);
      }
      return 0;
  }
