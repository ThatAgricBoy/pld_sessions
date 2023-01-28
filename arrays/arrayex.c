#include <stdio.h>

/**
  * Accessing an array using a for loop
  */
int main(void)
{
	int arrayex[] = {23, 24, 21, 32, 45, 67};
	
	int i;
	int size = sizeof(arrayex) / sizeof(arrayex[i]);

	for(int i = 0; i < size; i++)
	{
		printf("Accessing array arrayex\n");
		
		printf("This is one of the lists %d\n", arrayex[i]);
	}
	printf("\n");
	
	return (0);
}
