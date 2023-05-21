// Online C compiler to run C program online
#include <stdio.h>

int isleapyear(int y){
    if( y %400==0 || (y%4==0 && y%100!=0)){
        return 1;
    }else{
        return 0;
    }
    
}
int main() {
    int n1, n2;
    printf("Enter start year : ");
    scanf("%d",&n1);
    printf("Enter end year : ");
    scanf("%d",&n2);
    
    for(int i=n1; i<=n2; i++){
        if(isleapyear(i)){
            printf("%d ",i);
        }
    }
    
  
      
    return 0;
}