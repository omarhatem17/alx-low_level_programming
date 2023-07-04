#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * wrione o code here...
   * Reme:
   * - you a to use a
   * - you areed to modify p
   * - only stament
   * - you aotline of code
   */
  *(p + 5) = 98;
  /* ...sothirints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

