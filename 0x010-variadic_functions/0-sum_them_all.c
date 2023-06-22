#include "variadic_functions.h"
/**
 * sum_them_all - sums all numbers
 * @n: number of arguments
 * Return: sum on success 0 on faliure
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
