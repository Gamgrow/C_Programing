// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
void main()
{

int angle1,angle2,angle3;
scanf("%d%d%d",&angle1,&angle2,&angle3);

if((angle1 == angle2 && angle1==angle3) && angle1>0 && angle2>0 && angle3>0){
    printf("equwalateral");
}
else if((angle1==angle2 ||  angle2==angle3 || angle3==angle1) && angle1>0 && angle2>0 && angle3>0){
    printf("Isosels");
}else{
    printf("Scalen triangle");
}


}