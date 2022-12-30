#include <stdio.h>

int main(void)
{
	for(int i = 48; i <= 57; i++)
	{
		putchar (i);
		if (i != 57)
		{
	
		putchar (',');
		putchar (' ');
		}


	}
		putchar('\n');
		return 0;
}
