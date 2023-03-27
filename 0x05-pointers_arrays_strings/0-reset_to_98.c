#include "main.h"
/**
* reset_to_98 - resets to 98
* Return: nothing
* @n: pointer to the variable n in the main.c
*/
void reset_to_98(int *n)
{
	int **ptr = &n;

	**ptr = 98;
}
