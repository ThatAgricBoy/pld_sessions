#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int i;

	for (i = 4; i >= 0; i--)
	{
		printf("values at index %d is %d\n", i, a[i]);
	}
}
