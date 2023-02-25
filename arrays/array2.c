#include <stdio.h>

int main(void)
{
	int j, score[6], sum = 0; 
	double average = 0.0;

	printf("Enter scores: \n");

	for (j = 0; j < 6; j++)
	{
		scanf("%d", &score[j]);
	}

	int i;

	for (i = 0; i < 6; i++)
	{	
		sum += score[i];
		
		average = sum/6;
		printf("Index %d in the array contains %d \n", i, score[i]);
	}

	printf("Sum of the arrays are %d \n", sum);

	printf("Average of the arrays is %.2f \n", average);
	return (0);
}
