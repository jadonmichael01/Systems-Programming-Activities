#include <stdio.h>
#include "fib.h"

long fibN(int n){
long i;
long n1 =0;
long n2 = 1;
long n3 = n1 + n2;
for(i = 3; i <= n; i++){
n1 = n2;
n2 = n3;
n3 = n1+n2;
}
return n3;
}
