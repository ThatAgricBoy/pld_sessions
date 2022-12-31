#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * prototypes declared at the begining to be able to use in the main
  * functions declarations and definitions for repeatDigit and getRandomNumber functions
  * main - generates random number between 1 and 30
  */


void repeatDigit(int);
int getRandomNumber(int);

void repeatDigit(int b) 
{
   int digit = getRandomNumber(15);

   for(int i = 0; i < b; i++) 
{
    printf("%d ", digit);
}
  
  printf("\n");
}

int getRandomNumber(int maxNumber) 
{
  int randomNumber = rand() % maxNumber + 1;
  
  return randomNumber;
}

int main(void) 
{
	srand(time(NULL));
	
	int b = getRandomNumber(30);

	repeatDigit(b);

	return b;
}
