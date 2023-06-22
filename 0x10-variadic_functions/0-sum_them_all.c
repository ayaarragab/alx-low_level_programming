#include "variadic_functions.h"
/**
 * sum_them_all - sum all
 * @n: number
 * Return: sum or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	int sum;

	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		if (ptr != NULL)
		{
			sum += va_arg(ptr, int);
			i++;
		}
	}
	va_end(ptr);
	return (sum);
}
