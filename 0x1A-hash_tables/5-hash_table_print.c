#include "hash_tables.h"
/**
 * hash_table_print - prints elements of the hash table
 * @ht: hash table
 * Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *currentNode = NULL;
	unsigned long int i;
	char *comm = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size ; i++) /*The issue was in the loop condition*/
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			if (currentNode->key != NULL)
			{
				printf("%s'%s': '%s'", comm, currentNode->key, currentNode->value);
				comm = ", ";
			}
			currentNode = currentNode->next;
		}
	}
	printf("}\n");
}
