#include <stdio.h>

int main(int argc, char * argv[])
{
  int i = 0;
  while (i < 25) {
    printf("%d", i);
    i++;
  }
  printf("\n");
  int ii = 0;
  while (ii < 25) {
    printf("%d", ii);
    ++ii;
  }
  printf("\n");
  int iii = 25;
  while (iii >= 0) {
    printf("%d", iii);
    iii--;
  }
  printf("\n");
  return 0;
}
