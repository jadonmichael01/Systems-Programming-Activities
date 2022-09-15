#include <stdio.h>
int main()
{
  unsigned int x, y, z;
  x = 0x1234;
  y = x^0xfff;
  z = ~(x&y);
  printf("%x %x %x\n", x, y, z);
}
