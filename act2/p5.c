#include <stdio.h>
int main()
{
  int i;
  for(i=0; i<20; i++) {
    switch(i) {
      case 0:
        i += 8;
      case 16:
    i += 2;
      case 13:
    i++;
      default:
    ++i;
        break;
    }
    printf("%d\n", i);
  }
}
