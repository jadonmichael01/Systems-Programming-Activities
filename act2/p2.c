#include <stdio.h>
int main()
{
  int x = 4;
  int y = sizeof(x)==sizeof(float) ? 5+x++ : --x-3;
  printf("%d %d\n", x, y);
}
