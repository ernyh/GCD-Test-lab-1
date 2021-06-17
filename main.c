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
  int i = 0;
  double recursiveTime=0;
  double iterativeTime=0;
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
scanf("%d", &trialRuns); //10
//insert these from a file
printf("Enter first number(constant) to take GCD: ");
scanf("%d", &number1);
// This number will be incremented 14 times by 3^(n++)
printf("The second number will be 3^n where n is from 0 to 13 ");
printf("Processing...\n");

printf("Trial Runs: %d\n", trialRuns);
  printf("**********************************\n");

for(i=0; i < 14; i++){
  number2= power(3, i );
  printf("Test: %d\n", i+1);
  printf("Numbers used: %d , %d\n", number1, number2);

recursiveTime = testAverageTimeRecursive(trialRuns, number1, number2);
printf("Recursive version: %.9lf\n", recursiveTime);
iterativeTime = testAverageTimeIterative(trialRuns, number1, number2);
printf("Iterative version: %.9lf\n", iterativeTime);

if(recursiveTime < iterativeTime){
printf("Recursive is more effective by: %.9lf\n", 
iterativeTime - recursiveTime);
}
else {
printf("Iterative is more effective by: %.9lf\n",  
recursiveTime - iterativeTime);
}
  printf("**********************************\n");

}
//

printf("Goodbye!");
  return 0;
}