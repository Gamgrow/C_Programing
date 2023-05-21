#include <stdio.h>

int main()
{
    float rad;
    printf("Enter radius of circle : ");
    scanf("%f", &rad);
    float pi=3.14;
    float area = pi*(rad * rad);
    printf("The area of circle is %f", area);

    return 0;
}