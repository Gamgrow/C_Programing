#include <stdio.h>
int addnum(int n1, int n2);
int main()
{

    int n1 = 6, n2 = 9, sum;
    
    sum = addnum(n1, n2);
    printf("sum is %d", sum);

    return 0;
}

int addnum(int n1, int n2)
{
    return n1 + n2;
}