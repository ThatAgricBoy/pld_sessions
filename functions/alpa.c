#include <stdio.h>

void print_alphabet(void);
int main()
{
	print_alphabet();
	print_alphabet();
	print_alphabet();

	return(0);
}

void print_alphabet(void)
{
	char alpha = 'a';

	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
}
