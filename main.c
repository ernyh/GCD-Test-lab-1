#include <stdio.h>
#include "lab1_part_a.h"
#include "lab1_part_b.h"
#include <time.h>

int main(void) {

  double base;
  int exponent;
  double recursivePower;
  int trialRuns;
  int number1;
  int number2;
/*  
printf("LAB 1 PART A\n");
  printf("Enter base ");
  scanf("%lf", &base);

  printf("Enter exponent ");
  scanf("%d", &exponent);

printf("\n");
recursivePower= power( base, exponent);

printf("%lf raised to %d = %lf \n", base, exponent, recursivePower);
*/


printf("LAB 1 PART B\n");
printf("Enter the number of trial runs: ");
scanf("%d", &trialRuns);
printf("Enter first number to take GCD: ");
scanf("%d", &number1);
printf("Enter second number to take GCD: ");
scanf("%d", &number2);
printf("Processing...\n");
testAverageTime(trialRuns, number1,  number2);


  return 0;
}