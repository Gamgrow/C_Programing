// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
void main()
{

    int rating;
    scanf("%d", &rating);

    // if (rating <= 50)
    // {
    //     printf("Average");
    // }
    // else if (rating <= 60)
    // {
    //     printf("Good");
    // }
    // else if (rating <= 80)
    // {
    //     printf("Excellent");
    // }
    // else if (rating <= 100)
    // {
    //     printf("Outstanding");
    // }

    switch(rating){
        case 30 ...50:
        printf("Average");
        break;

        case 51 ...60:
        printf("Good");
        break;
        case 61 ...80:
        printf("Excellent");
        break;
        case 81 ... 100:
        printf("Outstanding");
        break;
    }
}