#include<stdio.h>
#include<math.h>

int main()
{
    int money;
    int a500=0, b200=0, c100=0, d25=0, e10=0, f5=0;

    printf("Enter money : ");
    scanf("%d",&money);

    if(money>=500){
        a500 = money/500;
        money -= a500*500;
    }
    if(money<500){
        b200 = money/200;
        money -= b200*200;
    }
    if(money<200){
        c100 = money/100;
        money -= c100*100;
    }
    if(money <100){
        d25 = money/25;
        money -= d25*25;
    }

    if(money<25){
        e10 = money/10;
        money -= e10*10;
    }
    if(money<10){
        f5 = money/5;
    
    }

    printf("The not 500 : %d\n",a500);
    printf("The not 200 : %d\n",b200);
    printf("The not 100 : %d\n",c100);
    printf("The not 25 : %d\n",d25);
    printf("The not 10 : %d\n",e10);
    printf("The not 5 : %d",f5);

}