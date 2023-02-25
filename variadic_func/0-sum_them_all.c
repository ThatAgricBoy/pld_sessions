#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list all;

	int i;
	int sum = 0;

	va_start(all n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(all 
	}
}
