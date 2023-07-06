#include "main.h"
/**
 * get_bit - gets bit
 * @n: num
 * @index: index
 * Return: a or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long mask = 1;
	if (index > (sizeof(n) * 8))
		return (-1);
	mask <<= index;
	return ((n & mask) ? 1 : 0);
}

/**
 * flip_bits - flips
 * @n: num1
 * @m: num2
 * Return: 1 or -1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, counter = 0, mask;

	result = m ^ n;
	mask = 1UL << (sizeof(result) * 8 - 1);
	while (result != 0)
	{
		if ((result & mask) == 0)
		{
			result <<= 1;
			continue;
		}
		else
		{
			counter++;
			result <<= 1;
		}
	}
	return (counter);
}
