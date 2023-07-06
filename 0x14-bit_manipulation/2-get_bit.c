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

	mask <<= index;
	result = mask & n;
	if (result)
		return (1);
	else if (result == 0)
		return (0);
	else
		return (-1);
}
