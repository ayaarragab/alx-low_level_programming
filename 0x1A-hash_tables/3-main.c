#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "mentioner", "cool");
    hash_table_set(ht, "hetdjksdairas", "mentioner");

    return (EXIT_SUCCESS);
}
