#include <stdio.h>
#include <math.h>

int main()
{

    // swap first digit and last digit
    int n = 9543;

    int Ldigit = n % 10;

    int digit = (int)log10(n);
    int fdigit = (int)(n / pow(10, digit));

    int swap;
    swap = Ldigit;
    swap *= (int)pow(10, digit);
    swap += n % ((int)pow(10, digit));
    swap -= Ldigit;
    swap += fdigit;
    printf("%d", swap);

    return 0;
}