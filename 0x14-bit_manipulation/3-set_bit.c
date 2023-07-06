#include "main.h"
/**
 * power - power
 * @x: num
 * @y: num
 * Return: num
*/
unsigned int power(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * (power(x, y - 1)));
}
/**
 * set_bit - con to 1
 * @n: number pointer
 * @index: index
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*(n) += power(2, index);
	return (1);
}
