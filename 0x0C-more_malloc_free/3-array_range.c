#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array from min to max
 * @min: minimum
 * @max: maximum
 * Return: pointer
*/
int *array_range(int min, int max)
{
    int i;

    int *ptr;

    if (min > max)
    {
        return (NULL);
    }
    ptr = malloc(((max - min) + 1) * sizeof(int));
    
    if (ptr ==  NULL)
    {
        return (NULL);
    }
    for ( i = 0; i <= (max - min); i++)
    {
        ptr[i] = i + min;
    }
    return (ptr);
}
