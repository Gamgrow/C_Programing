#include <stdio.h>
/*
gcc test.c
.\a.exe
done
*/

int main()
{

    int a = 5;
    // post increment
    printf("%d\n", a--);
    printf("%d\n", a);
    printf("%d\n", a++);
    printf("%d\n", a);

    // pre increment
    int b = 8;
    printf("%d\n", --b);
    printf("%d\n", b);
    printf("%d\n", ++b);
    printf("%d\n", b);

    return 0;
}