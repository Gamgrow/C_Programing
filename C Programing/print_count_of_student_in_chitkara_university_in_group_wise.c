// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
#include <limits.h>
#include<string.h>
#include<math.h>

int isstay(int arr[],int n, int n1, int n2){
   int cnt=0;
   for(int i=0; i<n; i++){
    if(arr[i]>=n1 && arr[i]<=n2){
        cnt++;
    }

   }

   return cnt;
    
}

void main(){

    int n;
    scanf("%d",&n);

    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d",arr+i);

    }
    
    
    // printf("%d %d\n",1,isstay(arr,n,0,39));
    // printf("%d %d\n",2,isstay(arr,n,40,49));
    // printf("%d %d\n",3,isstay(arr,n,50,59));
    // printf("%d %d\n",4,isstay(arr,n,60,79));
    // printf("%d %d\n",5,isstay(arr,n,80,100));

    int c1=0,c2=0,c3=0,c4=0,c5=0;

    for(int i=0; i<n; i++){
        if(arr[i]>=0 && arr[i]<=39){
            c1++;
        }

        else if(arr[i]>=40 && arr[i]<=49){
            c2++;
        }

        else if(arr[i]>=50 && arr[i]<=59){
            c3++;
        }
        else if(arr[i]>=60 && arr[i]<=79){
            c4++;
        }
        else if(arr[i]>=80 && arr[i]<=100){
            c5++;
        }
    }
        
        
    printf("%d %d\n",1,c1);
    printf("%d %d\n",2,c2);
    printf("%d %d\n",3,c3);
    printf("%d %d\n",4,c4);
    printf("%d %d\n",5,c5);



   


  }
      
        
        
    

    

    
    
