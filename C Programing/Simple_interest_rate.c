#include <stdio.h>

int main()
{

    printf("Enter money : ");
    float money;
    scanf("%f", &money);
    printf("Enter rate of interest : ");
    float rate;
    scanf("%f", &rate);

    printf("Enter for how much month : ");

    float month;
    scanf("%f", &month);

    float simpleInterest = (money * rate * month) / 100;
    printf("The SI is %f\n", simpleInterest);
    printf("The total amount with interest = %f", simpleInterest + money);

    return 0;
}