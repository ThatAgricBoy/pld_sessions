#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * working with function prototype, it has to be declared at the top of the main function 
  */


void repeatDigit(int repetitions);
int getRandomNumber(int maxNumber);

void repeatDigit(int repetitions) 
{
  int digit = getRandomNumber(9);
  for(int i = 0; i < repetitions; i++) 
  {
    printf("%d ", digit);
  }
  printf("\n");
}

int getRandomNumber(int maxNumber) {
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  int repetitions = getRandomNumber(10);
  repeatDigit(repetitions);
}
