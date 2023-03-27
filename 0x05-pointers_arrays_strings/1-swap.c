#include "main.h"
/**
*swap_int - swaps two numbers
*Return: nothing
*@b: pointer to the variable n in the main.c
*@a : pointer to var
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
