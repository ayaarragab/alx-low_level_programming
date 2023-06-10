#include "main.h"
/**
 * _sqrt_helper - helper
 * @n: num
 * @i: i
 * Return: sqrt
*/
int _sqrt_helper(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 1)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - gets sqrt recusively
 * @n: num to get its sqrt
 * Return: sqrt
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
