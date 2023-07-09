#include "hash_tables.h"

/**
 * shash_table_create - the hash table will be created using this function
 * @size: the size of the hash table
 *
 * Return: a pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
 	shash_table_t *my_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	my_table = malloc(sizeof(shash_table_t));
	if (my_table == NULL)
		return (NULL);
	my_table->size = size;

	my_table->shead = malloc(sizeof(shash_node_t));
	if (my_table->shead == NULL)
	{
		free(my_table);
		return (NULL);
	}

	my_table->stail = malloc(sizeof(shash_node_t));
	if (my_table->stail == NULL)
	{
		free(my_table->shead);
		free(my_table);
		return (NULL);
	}

	my_table->array = calloc(size, sizeof(shash_node_t *));
	if (my_table->array == NULL)
	{
		free(my_table->stail);
		free(my_table->shead);
		free(my_table);
		return (NULL);
	}

	my_table->shead = NULL;
	my_table->stail = NULL;
	for (i = 0; i < size; i++)
		my_table->array[i] = NULL;
	return (my_table);
}

/**
 * shash_table_set - set values for hash table
 * @ht: a pointer to the hash table
 * @key: a key to the hash table item
 * @value: the value of the key
 * Return: 1 on success or 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *item, *current;
	unsigned long int index, flag = 1;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	if (allocate_item_mem(&item, key, value) == 0)
		return (0);
	index = key_index((unsigned const char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index]->value = item->value;
		ht->array[index]->key = item->key;
		ht->array[index]->next = NULL;
		handle_linkedlist(&ht, &item);
	}
	else
	{
		current = ht->array[index];
		while(current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(item->key);
				free(item->next);
				free(item->sprev);
				free(item->snext);
				current->value = item->value;
				flag = 0;
				break;
			}
			current = current->next;
		}
		if (flag)
		{
			ht->array[index]->value = item->value;
			ht->array[index]->key = item->key;
			item->next = ht->array[index];
			ht->array[index] = item;
			handle_linkedlist(&ht, &item);
		}
	}

	return (1);
}

/**
 * shash_table_print - this will print the sorted items in the hash table
 * @ht: the table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cnt;
	unsigned long int flag = 0;
	if (ht == NULL)
		return;
	cnt = ht->shead;
	printf("{");

	while (cnt != NULL)
	{
		if (flag)
			printf(", ");
		flag = 1;
		printf("'%s': '%s'", cnt->key, cnt->value);
		cnt = cnt->snext;
	}
	printf("}\n");
}



/**
 * handle_linkedlist - handles the second linked list to print out a sorted list
 * @ht: this is the hash table
 * @item: the item to be inserted into the hash table
 */
void handle_linkedlist(shash_table_t **ht, shash_node_t **item)
{
	shash_node_t *current;
	
	if ((*ht)->shead == NULL || (*ht)->stail == NULL)
	{
		(*item)->snext = NULL;
		(*item)->sprev = NULL;
		(*ht)->shead = (*item);
		(*ht)->stail = (*item);
	}
	else
	{
		current = (*ht)->stail;
		while (current != NULL)
		{
			if (strcmp(current->key, (*item)->key) < 0)
			{
				if (current->sprev == NULL)
				{
					(*item)->snext = current->snext;
					(*item)->sprev = current;
					current->snext = (*item);
				}
				else if (current->snext == NULL)
				{
					(*item)->snext = NULL;
					(*item)->sprev = current;
					current->snext = (*item);
					(*ht)->stail = (*item);
				}
				else
				{
					(*item)->snext = current->snext;
					(*item)->sprev = current;
					current->snext->sprev = (*item);
					current->snext = (*item);
				}
			}
			else if (strcmp(current->key, (*item)->key) > 0)
			{
				if (current->snext == NULL && current->sprev == NULL)
				{
					(*item)->snext = current;
					(*item)->sprev = NULL;
					current->sprev = (*item);
					(*ht)->shead = (*item); 
				}

			}
			current = current->sprev;

		}


	}

}





/**
 * allocate_item_mem - allocate memory for the item
 * @item: the node
 * @key: the key of the value
 * @value: the value of the key
 *
 * Return: 1 on success or 0 on failure
 */
int allocate_item_mem(shash_node_t **item, const char *key, const char *value)
{
	*item = malloc(sizeof(shash_node_t));
	if (*item == NULL)
		return (0);

	(*item)->key = strdup(key);
	if ((*item)->key == NULL)
	{
		free(*item);
		return (0);
	}

	(*item)->value = strdup(value);
	if ((*item)->value == NULL)
	{
		free_basic(item);
		return (0);
	}

	(*item)->next = malloc(sizeof(shash_node_t));
	if ((*item)->next == NULL)
	{
		free_basic(item);
		return (0);
	}

	(*item)->sprev = malloc(sizeof(shash_node_t));
	if ((*item)->sprev == NULL)
	{
		free_basic(item);
		return (0);
	}

	(*item)->sprev = malloc(sizeof(shash_node_t));
	if ((*item)->snext == NULL)
	{
		free_basic(item);
		return (0);
	}
	return (1);
}
/**
 * free_basic - free up memories when errors are encountered
 * @item: a pointer to the item to free
 *
 */
void free_basic(shash_node_t **item)
{
	if ((*item)->value == NULL)
	{
		free((*item)->key);
		free(*item);
	}
	else if ((*item)->next == NULL)
	{	free((*item)->key);
		free((*item)->value);
		free(*item);
	}
	else if ((*item)->sprev == NULL)
	{
		free((*item)->key);
		free((*item)->value);
		free((*item)->next);
		free(*item);
	}
	else if ((*item)->snext == NULL)
	{
		free((*item)->key);
		free((*item)->value);
		free((*item)->next);
		free((*item)->sprev);
		free(*item);
	}
}

