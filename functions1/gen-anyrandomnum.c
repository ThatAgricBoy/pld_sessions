#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * program generates any random number according to the passed parameters for the getRandomNumber function
  */

int getRandomNumber(int maxNumber){
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  
  int randomNumber = getRandomNumber(100);
  printf("My random number is: %d", randomNumber);
  return randomNumber;
}
