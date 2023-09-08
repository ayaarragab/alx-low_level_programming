#include "hash_tables.h"
/**
 * key_index - gives the index of a specific key
 * @key: key
 * @size: size of hash table array
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index = hash_djb2(key);

    return (index % size);
}
