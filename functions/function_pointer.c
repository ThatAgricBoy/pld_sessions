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

	int a;
	int b;
	int c;

	// declaring the function pointer called the_pointer
	int (*the_pointer)(int, int, int) = sum;

	printf("Enter first number:\n");

	scanf("%d\n", &a);

	printf("Enter second number:\n");

	scanf("%d\n", &b);

	printf("Enter third number:\n");

	scanf("%d\n", &c);

	result = the_pointer(a, b, c);

	printf("Result of the addition using a function pointer is: %d\n", result);

	return(0);
}

int sum(int a, int b, int c)
{
	return a+b+c;
}
