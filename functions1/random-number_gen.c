#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * A simple program that generates random number between 1 and 20
  */

int main(void) {
  srand(time(NULL));
  // Write your code below
  int randomNumber = rand() % 20+1;
  printf("%d", randomNumber);

  return 0;
}
