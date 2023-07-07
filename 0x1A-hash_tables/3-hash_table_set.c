#include "hash_tables.h"

/**
 * hash_table_set - add elements to the hash table
 *
 * @ht: the hash table
 * @key: the key of the item that will be used to add element to the table
 * @value: the value of the hash the key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	item->next = NULL;
	strcpy(item->key, key);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		/* Add node at the top of the node list*/
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}

