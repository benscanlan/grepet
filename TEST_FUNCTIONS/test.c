
//https://stackoverflow.com/questions/46626660/getaddrinfo-and-inaddr-any


//#include "http_parser.h"

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

//http_parser_settings settings; get parser to work object required

//
const char* html(){
    FILE *filePointer;
    char savedString[255];
    filePointer = fopen("index.html", "r");

    // check there is no error opening the file

         if (filePointer == NULL)
     {
       perror("Error: ");
       //return(-1);
     }

    if(fgets(savedString, 255, filePointer) != NULL) {
        // print the return value (aka string read in) to terminal
        char* html = savedString;
      }
    fclose(filePointer);
    filePointer = NULL;
  //char* html = "<!DOCTYPE html><body><h1>Grepet.com</h1><p>Hi Guys!</p></body></html>\r\n";
    //char* html= fp;
  return html;
  }



int main(int argc, char** argv){
    printf("%s",html());
		
}

