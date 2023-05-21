#include <stdio.h>

int main()
{

    printf("hello\tworld \n"); // output hello   world
    printf("hello\t\tworld");  // output hello           world

    printf("\n");
    printf("backslash = \\  \n");    /* print backslash = \      */
    printf("backslash = \\\\ \n");   /*print backslash = \\           */
    printf("backslash = \\\\\\ \n"); /*print backslash = \\\          */
    printf("backslash = \\\\\\\\");  /*print backslash = \\\\           */

    return 0;
}