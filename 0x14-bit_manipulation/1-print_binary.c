#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: num
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long result, m = 1, size = sizeof(n) * 8, f = 0;

	m <<= (size - 1);
	if (n == 0)
		_putchar('0');
	while (m > 0)
	{
		result = n & m;
		if (result)
		{
			_putchar('1');
			f = 1;
		}
		else if (f)
		{
			_putchar('0');
		}
		m = m >> 1;
	}
}
