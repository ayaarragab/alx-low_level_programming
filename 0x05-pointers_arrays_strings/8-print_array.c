#include <stdio.h>
#include "main.h"
/**
*print_array - a function prints array
*Return: nothing
*@a: array test
*@n: number stop
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
