#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separation
 * @n: number of strings
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
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
		char *str = va_arg(ptr, char *);

		if (i == n - 1)
		{
			if (str == NULL)
			{
				printf("%s", "nil");
				break;
			}
			printf("%s", str);
			break;
		}
		if (str == NULL)
		{
			printf("%s", "nil");
			printf("%s", separator);
			i++;
			continue;
		}
		printf("%s", str);
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
