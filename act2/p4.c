#include <stdio.h>
int main()
{
  int i = 1;
  do {
    printf("%d\n", i);
    i++;
    if (i < 5)
      break;
  } while (i < 10);
}
