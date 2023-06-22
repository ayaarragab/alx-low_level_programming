#include "variadic_functions.h"
/**
 * print_string - print string
 * @arg: format
 * Return: nothing
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("%s", "nil");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print all
 * @format: format
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ptr;

	int i;

	va_start(ptr, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 's' ||
		format[i] == 'f' || format[i] == 'i')
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 's':
				print_string(ptr);
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			}
			if (format[i + 1] != '\0')
			{
				printf(", ");
			}
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
