#include <stdio.h>
#define N 5

int main(void)
{
  // printf("Hello World!\n");

  int a = 2, b = 3, c = 4;
  a += b *= c -= 1;
  printf("%d %d %d", a, b, c);
  return 0;
}

