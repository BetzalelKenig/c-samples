#include <stdio.h>

int main (void)
{
  // factorials aren't defined for the negative integers
  int num;
  do
  {
    printf("Enter a positive integer: ");
    scanf( "%d", &num);
  }
  while (num < 0);

  int factorial = 1;
  for (int i = 1; i <= num; i++)
    factorial = factorial * i;
  printf("%d! = %d\n", num, factorial);

  return 0;
}
