#include <stdio.h>

int fibo(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{

    int n;
    printf("%d", fibo(7));

    return 0;
}



// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     int a = 0, b = 1;
//     if (n == 0)
//     {
//         printf("%d", a);
//     }
//     else if (n == 1)
//     {
//         printf("%d ", a);
//         printf("%d ", b);
//     }
//     else
//     {
//         int i = 2;
//         printf("%d ", a);
//         printf("%d ", b);
//         while (i <= n)
//         {
//             int c = a + b;
//             printf("%d ", c);
//             a = b;
//             b = c;
//             i++;
//         }
//     }

//     return 0;
// }