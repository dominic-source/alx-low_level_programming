#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cnt;
	unsigned long int i, flag = 0, flag2 = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cnt = ht->array[i];
			if (flag)
				printf(", ");
			if (cnt->next == NULL)
			{
				printf("'%s': '%s'", cnt->key, cnt->value);
				flag = 1;
			}
			else
			{
				flag2 = 0;
				while (cnt != NULL)
				{
					if (flag2)
						printf(", ");
					flag2 = 1;
					printf("'%s': '%s'", cnt->key, cnt->value);
					cnt = cnt->next;
				}
			}
		}
	}
	printf("}\n");
}
