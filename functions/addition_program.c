#include <stdio.h>

/**
 * This code is about how to use function pointers. That is a pointer that points to a function
 */
// declaring a function
int sum(int, int, int);

int main(void)
{
 // declaring the variables to use in the program
 int result = 0;
 int a, b, c;
 int count = 0;

 // declaring the function pointer called the_pointer
 int (*the_pointer)(int, int, int) = sum;

 // loop to repeatedly ask for input
 while (1) {
 printf("Enter a number (or any non-numeric character to stop):\n");

 // check if the input is an integer
 if (scanf("%d", &a) != 1) {
 break; // break out of the loop if non-numeric character is entered
 }

 // update variables and count
 count++;
 if (count == 1) {
 b = a;
 } else if (count == 2) {
 c = a;
 } else {
 b = c;
 c = a;
 }

 // calculate the sum using the function pointer
 result = the_pointer(a, b, c);
 printf("Running sum: %d\n", result);
 }

 printf("Final sum: %d\n", result);
 return 0;
}

int sum(int a, int b, int c)
{
 return a + b + c;
}
