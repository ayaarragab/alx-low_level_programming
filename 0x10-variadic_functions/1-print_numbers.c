#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separatoin
 * @n: number of arguments
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	va_start(ptr, n);
	i = 0;
	if (separator == NULL)
	{
		separator = "";
	}
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(ptr, int));
			break;
		}
		printf("%d", va_arg(ptr, int));
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
