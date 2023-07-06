#include "main.h"
/**
 * power - power
 * @x: num
 * @y: num
 * Return: num
*/
unsigned long int power(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * (power(x, y - 1)));
}
/**
 * clear_bit - con to 1
 * @n: number pointer
 * @index: index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*(n) &= ~(1UL << index);
	return (1);
}
