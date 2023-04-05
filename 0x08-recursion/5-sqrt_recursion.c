#include "main.h"
int sqrt_newton_recursive_helper(int x, int root);
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
	else
	{
		return (sqrt_newton_recursive_helper(n, n));
	}
}
/**
* sqrt_newton_recursive_helper - function helper
* @x: base test
* @root: for recursives
* Return: sqrt root
*/
int sqrt_newton_recursive_helper(int x, int root)
{
	if (root * root == x && (root + 1) * (root + 1) > x)
	{
		return (root);
	}
	else if (root * root < x && (root + 1) * (root + 1) > x)
	{
		return (-1);
	}
	root = (root + x / root) / 2;
	return (sqrt_newton_recursive_helper(x, root));
}
