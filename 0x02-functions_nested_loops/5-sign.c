#include "main.h"
/**
*print_sign - prints the sign of a number.
*Return: 1 if positive, 0 if zero and -1 if negative
*@n: variable test
*/
int print_sign(int n)
{
	char p = '+', n = '-', z = '0';

	if (n > 0)
	{
		return (1);
		_putchar(p);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(n);
	}
	else
	{
		return (0);
		_putchar(z);
	}
}
