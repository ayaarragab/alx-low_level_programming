#include "main.h"
int isprime_helper(int n, int i);
/**
 * is_prime_number - helps isprime function
 * @n: number to know
 * Return: 0 if not and 1 if
 */
int is_prime_number(int n)
{
	return (isprime_helper(n, 1));
}
/**
 * isprime_helper - check if a number is prime or not
 * @n: number to check
 * @i: counter
 * Return: 0 if not prime and 1 if prime
 */
int isprime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (isprime_helper(n, i + 1));
}
