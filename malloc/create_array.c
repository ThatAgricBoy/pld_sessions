#include <stdio.h>
#include <stdlib.h>

int *create_array(int size)
{
	int *array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < size; i++)
	{
		array[i] = i;
	}
	return array;
}

int main()
{
	int size = 10;
	int *array = create_array(size);
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	free(array);
	return 0;
}
