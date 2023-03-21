#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char count;
	char new_line = '\n';
	int i = 0;

	while (i <= 9)
	{
		for (count = 'a'; count <= 'z' ; count++)
		{
			_putchar(count);
		}
		_putchar(new_line);
		i++;
	}
}
