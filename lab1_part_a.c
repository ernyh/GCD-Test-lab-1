#include "lab1_part_a.h"
#include <stdio.h>
/*
For n = 0, a^n = 1
For n > 0, a^n = a x a^(n - 1)
*/
double power(double a, int n){
  if (n==0){
    return 1;
  }
  if (n>0) {
   return a * power(a, n - 1);
  }
  if(n<0){
    return 1/a  * power(a, n + 1);
  }
}

double iterativePower(double a, int n){
  int i = 0;
  double total = 1;
  if(n==0){
    return 1;
  }
  if(n>0){
  for(i=0; i < n; i++){
    total *= a;
  }
  }
  if(n<0){
    n *= -1;
  for(i=0; i < n; i++){
    total *= 1/a;
  }
  }
  return total;
}

