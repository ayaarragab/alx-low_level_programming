#include "main.h"
/**
 * _print_rev_recursion - displays a string reversly
 * @s: string test
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*(s));
}
