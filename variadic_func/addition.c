#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
	va_list ap;

	int i;
	int total = 0;

	va_start(ap, count);
	for (i = 0; i < count; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);
	return total;
}
int main()
{
	int s = sum(5, 3, 5, 6, 3, 4);

	printf("Sum is %d\n", s);

	return (0);
}
