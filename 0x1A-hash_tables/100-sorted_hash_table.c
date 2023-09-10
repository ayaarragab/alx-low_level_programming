#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash tables (maximum number of elements)
 * Return: pointer on the hash table or null in failures
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}


/**
 * create_node - creates a node
 * @key: key
 * @value: value
 * Return: newly created node
*/
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
		return (NULL);
	node->value = strdup(value);
	if (node->value == NULL)
		return (NULL);
	node->snext = NULL;
	node->sprev = NULL;
	return (node);
}


/**
 * shash_table_set - set value to specifc key
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *tbArrNode, *new_item;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
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
	new_item = create_node(key, value);
	if (ht->shead == NULL)
	{
		ht->shead = new_item;
		ht->stail = new_item;
	}
	else
		add_to_sorted_list(ht, key, new_item);
	new_item->next = ht->array[idx];
	ht->array[idx] = new_item;
	return (1);
}


/**
 * add_to_sorted_list - traverse the sorted list to add the new_node
 * @table: table
 * @key: key
 * @new_item: node to be added
 * Return: nothing
*/
void add_to_sorted_list(shash_table_t *table, const char *key,
shash_node_t *new_item)
{
	shash_node_t *current = table->shead;
	shash_node_t *prev = NULL;

	while (current && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->snext;
	}
	if (prev == NULL)
	{
		new_item->snext = table->shead;
		table->shead->sprev = new_item;
		table->shead = new_item;
	}
	else
	{
		new_item->sprev = prev;
		new_item->snext = current;
		prev->snext = new_item;
		if (current)
			current->sprev = new_item;
		else
			table->stail = new_item;
	}
}


/**
 * shash_table_get - get specific value
 * @ht: table
 * @key: key
 * Return: value or null on faliure
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tbArrNode;

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


/**
 * shash_table_print - prints the hash table
 * @ht: ht
 * Return: nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *currentNode = NULL;
	char *comm = "";

	if (ht == NULL)
		return;
	printf("{");
	currentNode = ht->shead;
	while (currentNode)
	{
		if (currentNode->key != NULL)
		{
			printf("%s'%s': '%s'", comm, currentNode->key, currentNode->value);
			comm = ", ";
		}
		currentNode = currentNode->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints table in reverse
 * @ht: table
 * Returns: nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *currentNode = NULL;
	char *comm = "";

	if (ht == NULL)
		return;
	printf("{");
	currentNode = ht->stail;
	while (currentNode)
	{
		if (currentNode->key != NULL)
		{
			printf("%s'%s': '%s'", comm, currentNode->key, currentNode->value);
			comm = ", ";
		}
		currentNode = currentNode->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes table
 * @ht: table
 * Return: nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *currentNode = NULL, *temp = NULL;
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
