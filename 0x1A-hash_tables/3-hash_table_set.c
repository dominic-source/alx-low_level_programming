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

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
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
	strcpy(item->key, key);
	item->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else if (ht->array[index] != NULL)
		update(&(ht->array[index]), &item, key);
	
	return (1);
}

/**
 * update - A function to set or update linked list in the hash table
 * @ht: a pointer to the hash table
 * @item: a pointer to the preallocated item
 * @key: the key to the value
 */
void update(hash_node_t **ht, hash_node_t **item, const char *key)
{
	hash_node_t *current = *ht;
	int flag = 1;

	if (current->next == NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* set if value of key if key already exist */
			free((*item)->key);
			free(current->value);
			current->value = (*item)->value;
			free(*item);
		}
		else
		{
			(*item)->next = *ht;
			*ht = *item;
		}
	}
	else
	{	
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free((*item)->key);
				free(current->value);
				current->value = (*item)->value;
				flag = 0;
				free(*item);
			}
			current = current->next;
		}

		if (flag)
		{
			(*item)->next = *ht;
			*ht = *item;
		}
	}
}

