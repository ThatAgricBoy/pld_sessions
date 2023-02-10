#include <stdio.h>

int add(int *num1, int *num2)
{
	return *num1 + *num2;
}

int main()
{
	int pld = 23;
	int pld2 = 15;

	int sum = add(&pld, &pld2);
	printf("sum is %d\n", sum);

	return 0;
}
