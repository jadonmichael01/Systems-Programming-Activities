#include <stdio.h>
#include "fib.h"
#include "gcd.h"

int main()
{
printf("fibN(%d) => %ld\n", 49, fibN(49));
printf("fibN(%d) => %ld\n", 100, fibN(100));
  printf("gcd(%ld,%ld) => %ld\n", 8, 12, gcd(8, 12));
  printf("gcd(%ld,%ld) => %ld\n", 123, 345, gcd(123, 345));
printf("gcd(fibN(%d),fibN(%d)) => %ld\n", 8, 12, gcd(fibN(8), fibN(12)));
return 0;
}
