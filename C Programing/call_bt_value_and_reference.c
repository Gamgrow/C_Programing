#include <stdio.h>

int func2(int *n)
{

    *n = (*n) * (*n);
}

int func(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}

int main()
{

    int n = 4;
    func2(&n);
    printf("n= %d\n", n);

    return 0;
}
