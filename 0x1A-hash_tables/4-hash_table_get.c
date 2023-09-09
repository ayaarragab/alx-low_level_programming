#include "hash_tables.h"
/**
 * hash_table_get - get value by key
 * @ht: hash table
 * @key: the key
 * Return: value or null
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tbArrNode;

	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tbArrNode = ht->array[idx];
	while (tbArrNode)
	{
		if (strcmp(tbArrNode->key, key) == 0)
			return (tbArrNode->value);
		tbArrNode = tbArrNode->next;
	}
	return (NULL);
}
