#include "main.h"
/**
 * power - power
 * @x: num
 * @y: num
 * Return: num
*/
unsigned long int power(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * (power(x, y - 1)));
}
/**
 * binary_to_uint - bin to uint
 * @b: bin str
 * Return: num or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = strlen(b), i = 0, cntr = length - 1, num = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			num += power(2, cntr);
			cntr--;
			i++;
		}
		else if (b[i] == '0')
		{
			cntr--;
			i++;
			continue;
		}
		else
			return (0);
	}
	return (num);
}
