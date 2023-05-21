// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
void main()
{

int phy,chem,math;

scanf("%d%d%d",&phy,&chem,&math);

if(phy>=65 && chem>=55 && math>=50){
    int allsum = phy+chem+math;
    int mpsum=math+phy;
    if(allsum>=190 || mpsum>=140){
        printf("Eligible");
    }else{
        printf("not eligible");
    }
}else{
    printf("Not eligible");
}
   
    
  

}