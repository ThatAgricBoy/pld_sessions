#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * getRandom10000 generates a random number between 1 and 1000 and returns the result to a variable
  */


int getRandom1000() {
  int random1000 = rand() % 1000 + 1;
  return random1000;
  
}

int main(void) {
  srand(time(NULL));
  
  int ranNumber = getRandom1000();
  
  printf("My random number is: %d\n", ranNumber);
  return ranNumber;
}
