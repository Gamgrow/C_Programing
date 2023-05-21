#include <stdio.h>

int main()
{

    float price = 46.6;
    float *ptr = &price;

    float **pptr = &ptr;
    printf("%f", (**pptr));

    return 0;
}