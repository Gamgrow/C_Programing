#include <stdio.h>
// #include <math.h>

int main()
{
   
   int unit;
   scanf("%d",&unit);

   float total=0;

   if(unit<=199){

    total = unit*1.20;

   }

   else if(unit>=199 && unit<=400){
    
     total = unit*1.50;
   } 

   else if(unit>400 && unit<=600){
    total =  unit*1.80 ;
   }else{
    total =  (unit)*2;
   }


if(total>400)
{
    total =total+ total*0.15;
   printf("%.2f",total);


}

if(total<=100){
    printf("%d",100);
}
printf("%.2f",total);
    



 

    
    return 0;
}