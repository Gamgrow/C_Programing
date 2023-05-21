#include <stdio.h>

void func()
{
    static int f = 10;
    f++;
    printf("%d\n", f);
}

int main()
{

    func();
    func();
    func();
    return 0;
}