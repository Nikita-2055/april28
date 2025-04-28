#include<stdio.h>
#include "mymath.h"
int main(){
 printf("factorial: %ld\n",factorial(5));
 printf("fibonacci: %ld\n",fibonacci(5)); 
 printf("gcd: %d\n",gcd(10,15));
 printf("prime_check: %d\n",prime_check(11));
 return 0;
}
