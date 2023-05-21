#include <stdio.h>
#include <math.h>

int main()
{
   
 float a,b;
 char ch;
 scanf("%d%d",&a,&b);
 scanf("\n%c",&ch);

 float per = (float)(b/a);

 per = per*100;

 if(per>=75.0){
    printf("You have attended %.2f%% classes You are allowed to sit for exam",per);
 }
 else if(per<75.0){
    if(ch=='y'){
        printf("You have attended %.2f%% classes. You are allowed to sit for the exam",per);

    }else{
        printf("You have attended %.2f%% classes. You are not allowed to sit for the exam",per);
    }
 }

    
    return 0;
}