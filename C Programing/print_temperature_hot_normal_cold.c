// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
void main()
{

    int temp;
    scanf("%d", &temp);

    // if (temp < 0)
    // {
    //     printf("Freezing");
    // }
    // else if (temp >= 0 && temp < 10)
    // {
    //     printf("Very Cold");
    // }
    // else if (temp >= 10 && temp < 20)
    // {
    //     printf("Cold");
    // }
    // else if (temp >= 20 && temp < 30)
    // {
    //     printf("Normal");
    // }
    // else if (temp >= 30 && temp < 40)
    // {
    //     printf("Hot");
    // }
    // else if (temp >= 40)
    // {
    //     printf("Too Hot");
    // }

    if(temp<0){
        printf("Freezing");
    }else if(temp<10){
        printf("Very cold");
    }else if(temp<20){
        printf("Cold");
    }else if(temp<30){
        printf("Normal");
    }else if(temp<40){
        printf("Hot");
    }else{
        printf("Too hot");
    }


}