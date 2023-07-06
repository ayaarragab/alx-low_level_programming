#include "main.h"
/**
 * get_bit - gets bit
 * @n: num
 * @index: index
 * Return: a or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long mask = 1, result;
	if (index > (sizeof(n) * 8))
		return (-1);
	mask <<= index;
	result = mask & n;
	if (result)
		return (1);
	else if (result == 0)
		return (0);
	else
		return (-1);
}

/**
 * flip_bits - flips
 * @n: num1
 * @m: num2
 * Return: 1 or -1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, counter = 0, ctr = 0;

	int i;

	result = m ^ n;
	i = get_bit(result, counter);
	while (result != 0)
	{
		if (i == 1)
		{
			counter++;
			ctr++;
		}
		else if (i == 0)
		{
			counter++;
			result <<= 1;
			continue;
		}
		result <<= 1;
	}
	return (ctr);
}
