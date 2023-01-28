#include <stdio.h>

/**
  * Accessing an array using a for loop
  * Using functions
  */

int printarrays(int *a, int n);

int main(void)
{	
	
	int arrayex[6] = {23, 24, 21, 32, 45, 67};

	printarrays(arrayex, 6);
	
	return (0);
}

int printarrays(int *a, int n)
{
	int i;

	for(int i = 0; i < n; i++)
	{
		
		printf("\n%d", a[i]);

		if(i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	
	return 0;

}
