#include <stdio.h>

int main()
{

  int num;
  num = 1;
  repeat:
  printf("%d ", num);
  num++;
  if (num <= 10)
    goto repeat;

  return 0;
}