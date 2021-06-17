#include "lab1_part_b.h"


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