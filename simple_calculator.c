#include <stdio.h>

/**
  * main - performs mathematical operations
   on two numbers
  *
  * Return: 0 means success
  */
int main(void)
{
	float num1, num2, result;
	char op, choice;

	do
	{
		printf("Enter first number: ");
		scanf("%f", &num1);

		printf("Enter operator (+, -, *, /): ");
		scanf(" %c", &op);

		printf("Enter second number: ");
		scanf("%f", &num2);

		switch(op)
		{
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				result = num1 / num2;
				break;
			default:
				printf("Invalid Operator\n");
				return (1);
		}

		printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);

		printf("Do you want to perform another calculation? (Y/N: ");
		scanf(" %c", &choice);
	}
	while (choice == 'Y' || choice == 'y');
	return (0);
}
