#include "main.h"
/**
 * factorial - function to get factorial of a number
 * @n: variable test
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
