#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{

	va_list all;

	int i;
	int sum = 0;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{	if (n == 0)
		{
			return (0);
		}
		else
		{
		sum += va_arg(all, int);
		}
	}
	va_end(all);

	return sum;
}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
