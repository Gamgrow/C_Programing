// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
void main()
{
    int largest,n1,n2,n3,n4;

    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    if(n1<n2 && n1<n2 && n1<n3 ){
        printf("%d is Largest Number",n1);
    }

    if(n2<n1 &&n2<n3 && n2<n4 ){
        printf("%d is Largest Number",n2);
    }
    if(n3<n1 && n3<n2 && n3<n4 ){
        printf("%d is Largest Number",n3);
    }

    if(n4<n1 && n4<n2 && n4<n3){
        printf("%d is Largest Number",n4);
    }
   
    
  

}