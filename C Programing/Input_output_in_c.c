#include <stdio.h>

int main()
{
    // get character value

    printf("Enter a value : ");
    char s = getchar();
    putchar(s);
    printf("%d",sizeof(s) );

    // // get string value
    // printf("Enter a String : ");
    // char abc[100];

    // gets(abc);
    // printf("Your output is : ");
    // puts(abc);

    return 0;
}