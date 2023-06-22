#include "variadic_functions.h"
/**
 * print_char - print char
 * @arg: format
 * @l: length
 * @i: counter
 * Return: nothing
*/
void print_char(va_list arg, int l, int i)
{
	if (i == l - 1)
	{
		printf("%c", va_arg(arg, int));
		return;
	}
	printf("%c, ", va_arg(arg, int));
}
/**
 * print_int - print char
 * @arg: format
 * @l: length
 * @i: counter
 * Return: nothing
*/
void print_int(va_list arg, int l, int i)
{
	if (i == l - 1)
	{
		printf("%d", va_arg(arg, int));
		return;
	}
	printf("%d, ", va_arg(arg, int));
}
/**
 * print_string - print string
 * @arg: format
 * @l: length
 * @i: counter
 * Return: nothing
*/
void print_string(va_list arg, int l, int i)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		if (i == l - 1)
		{
			printf("%s", "nil");
			return;
		}
		printf("%s,", "nil");
		return;
	}
	if (i == l - 1)
	{
		printf("%s", str);
		return;
	}
	printf("%s, ", str);
}
/**
 * print_float - prints float
 * @arg: arg
 * @l: length
 * @i: counter
 * Return: nothing
*/
void print_float(va_list arg, int l, int i)
{
	if (i == l - 1)
	{
		printf("%f", va_arg(arg, double));
		return;
	}
	printf("%f, ", va_arg(arg, double));
}
/**
 * print_all - print all
 * @format: format
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ptr;

	int i, l;

	va_start(ptr, format);

	l = strlen(format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			print_char(ptr, l, i);
			i++;
			continue;
		case 'i':
			print_int(ptr, l, i);
			i++;
			continue;
		case 's':
			print_string(ptr, l, i);
			i++;
			continue;
		case 'f':
			print_float(ptr, l, i);
			i++;
			continue;
		default:
			i++;
			continue;
		}
	}
	printf("\n");
	va_end(ptr);
}
