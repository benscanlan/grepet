//cTops.c
//while (Listen)
//    function 1
//             2
//             3
//     respond

#include "headers.h"
int main() {
    // printf() displays the string inside quotation
     printf("Hello, World!");
    //returns a string
    //how about returns a filecontents
    FILE *filePointer ;
    char dataToBeRead[50]; // can ask for size ahead of time of file for best memory ussage
    filePointer = fopen("disable_context_menu.html", "r") ;
    
    //check if the file pointer is null if null route cannot be resolved send 404 page error code
    if ( filePointer == NULL ) {
          printf( "404 file failed to open." ) ;
      }
    else {
        printf("The file is now opened.\n") ;
            
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL ) { // using fgets() method fgets line by line
              printf( "%s" , dataToBeRead ) ; // Print the dataToBeRead
           }
          fclose(filePointer) ;
          printf("Data successfully read from file GfgTest.c\n");
          printf("The file is now closed.") ;
      }
      return 0;
  }
