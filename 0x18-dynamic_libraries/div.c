#include "operations.h"
/**
 * div - div a / b
 * @a: num1
 * @b: num2
 * Return: a / b
*/
size_t div(size_t a, size_t b)
{
	size_t result = 0;

	if (b == 0)
		return (0);
	result = a / b;
	return (result);
}
