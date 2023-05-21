#include <stdio.h>

int main()
{

    int a = 8;
    float b = 5.66;
    printf("%f\n", b);

    b = 9.4;
    printf("%f\n", b);

    // but

    const float c = 8.5;

    c = 5.6;
    printf("%f\n", c); // gets Error because c made constant i cant change it

    const int i = 5;
    i = 8;
    printf("%d", i); // i can't change it

    // so this is use of sonst keyword

    return 0;
}