#include "main.h"
/**
* print_line - a function that prints a line
* Return: nothing
* @n : variable test
*/
void print_line(int n)
{
	int i;

	char c, l;

	l = '_';

	for (i = 1 ; i <= n ; i++)
	{
		_putchar(l);
	}
	c = '\n';

	_putchar(c);
}
