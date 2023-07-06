#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: num
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned int result;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		result = n & 1;
		if (result == 0)
			_putchar('0');
		else
			_putchar('1');
		n = n >> 1;
	}
}
