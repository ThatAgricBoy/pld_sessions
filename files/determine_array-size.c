#include <stdio.h>

/**
  * How to determine array size and the number of elements it contains
  *
  */


int main(void) 
{
int max[4] = {5, 7, 6, 8};
int maxsize = sizeof(max);

int nuumberofelement = sizeof(max) / sizeof(int);

printf("Total array size in bytes: %d\n", maxsize); 


printf("The number of array elements is: %ld\n", nuumberofelement);
}

