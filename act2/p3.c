#include <stdio.h>
int main()
{
  int x = 2, y = 0;
  if(x > 5) 
    if(x > 10)
      y = 1;
  else
    y = 2;
  printf("%d\n", y);
}
