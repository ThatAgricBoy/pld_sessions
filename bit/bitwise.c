#include <stdio.h>

/**
 * How to use bitwise operators
 */

int main(void)
{
	int a = 10, b = 6;

	printf("%d\n", a & b);/* bitwise AND operator */

	printf("%d\n", a | b); /* bitwise OR oprerator */
	printf("%d\n", a ^ b); /* bitwise XOR operator */
/**
  * When you have multiple operators in a line you should
  * check the precedence of the operators.
  * In this example the relational operator + takes the highst precedence
  * then bitwise & 
  * then logical &&
  * then logical operator ||
  */
	printf("%d\n", a & b && b + 1 || 0);
	
	printf("%d\n", a & b && b + 1 || 0 && b++);

	return (0);
}
