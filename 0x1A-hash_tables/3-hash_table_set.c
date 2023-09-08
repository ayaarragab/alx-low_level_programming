#include "hash_tables.h"
/**
 * create_item - creates a node
 * @key: key
 * @value: value
 * Return: key
 */
hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	item->key = malloc(sizeof(key));
	if (item->key == NULL)
		return (NULL);
	item->value = malloc(sizeof(value));
	if (item->value == NULL)
		return (NULL);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
/**
 * free_hash_table - frees a hash table
 * @table: table
 * @index: index
 * Return: nothing
*/
void free_hash_table(hash_table_t **table, unsigned long int index)
{
	hash_node_t *temp;
	unsigned long int i;

	for (i = index; (*table)->array[i]; i++)
	{
		temp = (*table)->array[i];
		(*table)->array[i] = (*table)->array[i]->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free((*table)->array);
	free(*table);
}

/**
 * hash_table_set - set value to specifc key
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item;

	if (ht == NULL || key == NULL || index > ht->size)
		return (0);
	if (value == NULL)
		strcpy((char *)value, "");
	if ((ht->array)[index] == NULL)
	{
		hash_node_t *item = create_item((char *)key, (char *)value);

		item->next = NULL;
		(ht->array)[index] = item;
		free_hash_table(&ht, index);
		return (1);
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free_hash_table(&ht, index);
		return (0);
	}
	item = create_item((char *)key, (char *)value);
	if ((ht->array)[index]->next == NULL)
	{
		(ht->array)[index]->next = item;
		item->next = NULL;
		free_hash_table(&ht, index);
		return (1);
	}
	while ((ht->array)[index]->next)
		(ht->array)[index] = (ht->array)[index]->next;
	(ht->array)[index]->next = item;
	item->next = NULL;
	free_hash_table(&ht, index);
	return (1);
}
