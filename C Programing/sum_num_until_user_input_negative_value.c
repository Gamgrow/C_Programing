// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
void main()
{

    int n,sum=0;
    // scanf("%d",&n);|
    repeat:
    scanf("%d",&n);
    if(n>0){

        sum +=n;

        goto repeat;
        
    }else{
        printf("%d",sum);
    }
   
    
  

}