#include<stdio.h>
#include <stdlib.h>
int main(){

    char *str;
    str = (char *)malloc(15);
    strcpy(str,"hello");
    printf("String = %s Address = %u\n",str,str);
    // reallocation memoer
    str = (char *) realloc(str,25);
    strcat(str,".com");
    printf("String = %s, Address = %u\n", str,str);
    free(str);

   

    return 0;
}