#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: table
 * Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currentNode = NULL, *temp = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size ; i++)
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			if (currentNode->key != NULL)
			{
				temp = currentNode;
				currentNode = currentNode->next;
				if (temp->key != NULL)
					free(temp->key);
				if (temp->value != NULL)
					free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
