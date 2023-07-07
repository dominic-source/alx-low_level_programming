#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *current, *hold;
	unsigned long int i = 0, m;



	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "This looks like a city");
	hash_table_set(ht, "stylist", "He or she likes some styles");
	hash_table_set(ht, "mentioner", "This guy likes mentioning peoples name in simple conversation");
	hash_table_set(ht, "dram", "They like a lot of dramas");
	hash_table_set(ht, "subgenera", "They are like submarines");
	hash_table_set(ht, "vivency", "There is a valenc somewhere");
	hash_table_set(NULL, "", "There is a boy here");
	printf("------------Starting the hash table----------\n\n");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			printf("=======found a hash at index %lu ===========\n", i);
			if (ht->array[i]->next == NULL)
			{
				printf("key: %s  : value: %s \n", ht->array[i]->key, ht->array[i]->value);
			}
			else
			{
				current = ht->array[i];
				printf("$$$$$$$$$ We got a linked list here ##########\n");
				for (m = 0; current != NULL; m++)
				{
					printf("key: %s : value: %s \n", current->key, current->value);
					current = current->next;
				}
			}
		}
		i++;
	}
	printf("\n------------End of hash table----------------\n");

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
	return (EXIT_SUCCESS);
}
