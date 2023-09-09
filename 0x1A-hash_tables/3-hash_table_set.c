#include "hash_tables.h"
/**
 * hash_table_set - set value to specifc key
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tbArrNode, *new_item;

	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index(key, ht->size);
	tbArrNode = ht->array[idx];
	while (tbArrNode)
	{
		if (strcmp(tbArrNode->key, key) == 0)
		{
			free(tbArrNode->value);
			tbArrNode->value = strdup(value);
			if (tbArrNode->value == NULL)
				return (0);
			return (1);
		}
		tbArrNode = tbArrNode->next;
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->value = strdup(value);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (0);
	}
	new_item->next = ht->array[idx];
	ht->array[idx] = new_item;
	return (1);
}
