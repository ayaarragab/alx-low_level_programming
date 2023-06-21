#include "3-calc.h"
/**
 * op_add - adds
 * @a: int
 * @b: int
 * Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs
 * @a: int
 * @b: int
 * Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - adds
 * @a: int
 * @b: int
 * Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - adds
 * @a: int
 * @b: int
 * Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - adds
 * @a: int
 * @b: int
 * Return: result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
