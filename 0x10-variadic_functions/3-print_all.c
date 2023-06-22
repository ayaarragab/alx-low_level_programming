#include "variadic_functions.h"
/**
 * print_with_or - prints with separator if not last
 * @i: indes
 * @l: length
 * @va_list: arg
 * @a: argument
 * @le: letter
 * Return: nothing
*/
void print_with_or(int i, int l, void func(char, va_list), va_list a, char le)
{
	if (i == l - 1)
	{
		func(le, a);
		return;
	}
	func(le, a);
	printf(", ");
}
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
 * func - doing the process
 * @arg: argument
 * @letter: letter
 * Return: nothing
*/
void func(char letter, va_list arg)
{
	switch (letter)
	{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 's':
			print_string(arg);
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		default:
			break;
	}
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
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			print_with_or(i, l, &func, ptr, format[i]);
			i++;
			continue;
		case 'i':
			print_with_or(i, l, &func, ptr, format[i]);
			i++;
			continue;
		case 's':
			print_with_or(i, l, &func, ptr, format[i]);
			i++;
			continue;
		case 'f':
			print_with_or(i, l, &func, ptr, format[i]);
			i++;
			continue;
		default:
			i++;
			continue;
		}
	}
	va_end(ptr);
	printf("\n");
}
