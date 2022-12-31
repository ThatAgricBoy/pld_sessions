#include <stdio.h>

int main()
{
	int a;
	int g;
	int answer;

	printf("Please enter first number\n");

	scanf("%d", &a);

	printf("Please enter second number\n");

	scanf("%d", &g);

	answer = a + g;
	
	printf("The addition of the two number is %d\n", answer);

	return 0;
}
