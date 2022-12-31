#include <stdio.h>

/**
  * The incrementAge function is a function that takes an integer pointer as an argument. The purpose of the function is to increment the age by 1. It does this by dereferencing the pointer and adding 1 to the value at that memory location.*/


void incrementAge(int* agePointer)
{
  *agePointer = *agePointer+1;
}


int main(void) 
{
  int age = 30;

  incrementAge(&age);

  printf("%d", age);
}
