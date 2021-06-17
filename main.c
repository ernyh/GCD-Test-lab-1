#include <stdio.h>
#include "lab1_part_a.h"
#include "lab1_part_b.h"
#include <time.h>

int main(void) {
  double base;
  int exponent;
  double recursivePower;
  clock_t timer;
  double time_taken;
  

  printf("Enter base ");
  scanf("%lf", &base);

  printf("Enter exponent ");
  scanf("%d", &exponent);

printf("\n");
recursivePower= power( base, exponent);

printf("%lf raised to %d = %lf \n", base, exponent, recursivePower);

//gcd

/*
timer = clock();
// insert function to be timed here
printf ("processing: ");
recursivePower= power( base, exponent);
timer = clock() - timer;
//to seconds
time_taken = ((double)timer) / CLOCKS_PER_SEC;
printf("%lf", time_taken);
*/

  return 0;
}