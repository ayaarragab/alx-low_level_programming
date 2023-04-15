#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc with handelling
 * @b: size
 * Return: nothing
*/
void *malloc_checked(unsigned int b)
{
    int *ptr;

    ptr = malloc(sizeof(int) * b);
    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);
}
