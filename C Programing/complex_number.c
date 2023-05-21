#include <stdio.h>
#include <math.h>

int main()
{
   
 double a,b,c,root1,root2,descriment,realPart,ImagPart;
 scanf("%lf%lf%lf",&a,&b,&c);
  descriment  = b*b - 4*a*c;

    if(descriment>0){
        root1 = (-b+sqrt(descriment)) /(2*a);
        root2 = (-b-sqrt(descriment))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);

    }
    else if(descriment==0){
        root1=root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf",root1);
    }else{
        printf("last");
    realPart = -b/(2*a);
    ImagPart = sqrt(-descriment)/(2*a);
    printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi",realPart,ImagPart,realPart,ImagPart);


    }

    
    return 0;
}