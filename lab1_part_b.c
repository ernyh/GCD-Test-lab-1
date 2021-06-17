#include "lab1_part_b.h"
#include <time.h>
#include <stdio.h>

void testAverageTime(int trialRuns, int number1, int number2){
clock_t timer;
double time_taken = 0;
int i = 0;

for(i=0; i < trialRuns; i++){
timer = clock();
// insert function to be timed here
recursiveGCD (number1, number2);
timer = clock() - timer;
//to seconds
time_taken += ((double)timer) / CLOCKS_PER_SEC;
}
printf("Recursive version: %lf\n", time_taken);

time_taken = 0;
for(i=0; i < trialRuns; i++){
timer = clock();
// insert function to be timed here
iterativeGCD(number1, number2);
timer = clock() - timer;
//to seconds
time_taken += ((double)timer) / CLOCKS_PER_SEC;
}
printf("Iterative version: %lf\n", time_taken);

}



//fix me void sendToFile();

//not the best one 
int recursiveGCD (int x, int y){
if(x==y){
  return x;
}
else if (x > y){
return recursiveGCD(x - y, y );
}
else{
return recursiveGCD(x, y - x );
}
}

//
int iterativeGCD (int x, int y){
  if(x==y){
    return x;
  }
  while (x != y){
    if(x > y){
      x= x-y;
    }
    else{
      y = y-x;
    }
  }
  return x;
}