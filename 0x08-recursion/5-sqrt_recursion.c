#include "main.h"
#define MAX_DEPTH 50
int sqrt_newton_recursive_helper(int x, int i);
/**
* _sqrt_recursion - gives sqrt
* @n: variable test
* Return: sqrt value
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (sqrt_newton_recursive_helper(n, 1));
}
/**
* sqrt_newton_recursive_helper - function helper
* @x: base test
* @i: recursive times
* Return: sqrt root
*/
int sqrt_newton_recursive_helper(int x, int i)
{
	int _sqrt = i * i;

	if (_sqrt > x)
	{
		return (-1);
	}
	if (_sqrt == x)
	{
		return (i);
	}
	return (sqrt_newton_recursive_helper(x, i + 1));
}
