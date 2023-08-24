#include "operations.h"
/**
 * mod - add a % b
 * @a: num1
 * @b: num2
 * Return: a % b
*/
size_t mod(size_t a, size_t b)
{
	size_t result = 0;

	if (b == 0)
		return (0);
	result = a % b;
	if (a < 0 && b < 0)
		result *= -1;
	return (result);
}
