#include "main.h"
/**
 * is_prime_helper - checks if num is prime or not
 * @n: num test
 * @i: num
 * Return: 1 if prime 0 if not
*/
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - checks if num is prime or not
 * @n: num test
 * Return: 1 if prime 0 if not
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
