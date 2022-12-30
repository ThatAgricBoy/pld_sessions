#include <stdio.h>

int main(void)
{	
	int i;
	int j;


	for(int i = 48; i < 57; i++)
	{
		for(j = 48; j <= 57; j++)
		{
			if(i != j)
			{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			}
		}

	}
		putchar('\n');
		return 0;

}
