// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
#include <limits.h>
#include<string.h>
#include<math.h>


int armstrong(int n){

    if(n<10){

    }
    int original = n;
    int length = (int)log10(n)+1;
    int sum=0;
    while(n>0){
        int ld = n%10;
        sum = sum + ceil(pow(ld,length));

        n = n/10;
    }

    if(original==sum){
        return 1;
    }else{
        return 0;
    }



}

void main(){

 int n;
    scanf("%d",&n);
    if(n==2){
        printf("%d %d",0,1);
    }else{
        printf("%d %d ",0,1);
    for(int i=153; i<=n; i++){

        if(armstrong(i)==1){
            printf("%d ",i);
        }
    }
    }

   


   


  }
      
        
        
    

    

    
    
