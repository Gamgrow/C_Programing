#include <stdio.h>

int main()
{

    int a = 8;
    float b = 7.333;
    // . ke bad wale increasing
    printf("%.9f\n",b);  // 7.333000183
    printf("%.3f\n",b);  // 7.3330
    printf("%.2f\n",b);  // 7.33
    printf("%.1f\n",b);  // 7.3
    // now move space
    printf("%0.2f\n",b); // 7.33  -> 0 space
    printf("%1.2f\n",b); // 7.33  -> 0 space
    printf("%2.2f\n",b); // 7.33  -> 0 space
    printf("%3.2f\n",b); // 7.33  -> 0 space
    printf("%4.2f\n",b); // 7.33  -> 0 space
    printf("%5.2f\n",b); //   7.33-> 1 space
    printf("%8.2f\n",b);   //     7.33 -> 4 space\

    // negtive a
    printf("%-5.2f hello\n",b);  // 1 space after value of b print (7.33  hello)
    printf("%-8.2f hello\n",b);  // 4 space after value of b print (7.33    hello)
    printf("%-10.2f hello\n",b); // 6 space after value of b print (7.33      hello)
    

    return 0;
}