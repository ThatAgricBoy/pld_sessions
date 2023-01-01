#include <stdio.h>

/**
  * Understanding how pointers work, how to derefernce and 
  get the value of the variable pointed to by the pointer and 
  also how to print the address of a varable address using %p
  operator
  /


int main(void)
{
char c = 'a';
int x = 123;
float f = 456.789f; 
char *mycharp = &c;
int *myintp = &x; 
float *myfloatp = &f;
printf("The value of a pointed-to char: %c\n", *mycharp);
printf("The value of a pointed-to int: %d\n", *myintp);
printf("The value of a pointed-to float: %.3f\n", *myfloatp);
printf("The address of f pointed-to float: %p\n", myfloatp);
printf("The address of f : %p\n", &f);
}


