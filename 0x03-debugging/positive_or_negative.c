#include <stdio.h>
/**
*main - entry point of programs
*
*Return: return 0
*/
void positive_or_negative(int n)
{

        if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else
                printf("%d is zero\n", n);
}
