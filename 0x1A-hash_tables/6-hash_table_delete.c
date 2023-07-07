#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *hold;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next == NULL)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
			else
			{
				current = ht->array[i];
				while (current != NULL)
				{
					free(current->key);
					free(current->value);
					hold = current;
					current = current->next;
					free(hold);
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
