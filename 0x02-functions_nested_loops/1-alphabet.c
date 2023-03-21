#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return : nothing
 */
void print_alphabet(void)
{
	char new_line = '\n';
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(new_line);
}
