#include "hash_tables.h"

/**
 * hash_table_create - This will create the hash table
 * @size: This is the size of the hash table we want to create
 *
 * Return: Returns the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	unsigned long int i;

	my_table = malloc(sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);
	my_table->size = size;
	my_table->array = calloc(size, sizeof(hash_node_t));
	if (my_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		my_table->array[i] = NULL;
	return (my_table);
}

