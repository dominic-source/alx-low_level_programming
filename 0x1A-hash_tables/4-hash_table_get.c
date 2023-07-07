#include "hash_tables.h"

/**
 * hash_table_get - get the value and key if exist
 * @ht: the hash table
 * @key: the key to the item to retrieve
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	else if (ht->array[index]->next == NULL)
		return (ht->array[index]->value);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
