#include <stdio.h>

int main()
{

    int unit = 150;

    float amt;
    if (unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if (unit <= 150)
    {
        amt = 25 + ((unit - 50) * 0.75);
    }
    else if (unit <= 250)
    {
        amt = 25 + 75 + (unit - 150) * 1.20;
    }
    else
    {
        amt = 25 + 100 + 120 + (unit - 250);
    }

    float sur_charge = amt * 0.20;
    float total = sur_charge + amt;
    printf("%f", total);

    return 0;
}