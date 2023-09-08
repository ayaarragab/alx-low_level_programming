#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash tables (maximum number of elements)
 * Return: pointer on the hash table or null in failures
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
