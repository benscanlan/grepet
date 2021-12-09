#include <string.h>
#include <stdio.h>

int main()
{
    char str[100], *s = str, *t = NULL;

    strcpy(str, "a space sds dasfds delimited string");
    while ((t = strtok(s, " ")) != NULL) {
        s = NULL;
        printf("%s\n", t);
    }
    return 0;
}



            // char str[100], *s = str, *t = NULL;

            // strcpy(str, buffer);
            // while ((t = strtok(s, " ")) != NULL) {
            //     s = NULL;
            //     printf("%s\n", t);
            // }