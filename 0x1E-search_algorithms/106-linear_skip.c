#include "search_algos.h"


/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: the list
 * @value: the value in search of
 * Return: NULL or a pointer to the node
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = NULL;

	if (list == NULL)
		return (NULL);

	while (list != NULL && list->n < value && list->express != NULL)
	{
		node = list;
		list = list->express;
		printf("Value checked at index[%li] = [%i]\n", list->index, list->n);
	}
	printf("Value found between indexes [%li] and [%li]\n",
			node->index, list->index);
	while (node != NULL && node->n != value && node->index < list->index)
	{
		printf("Value checked at index[%li] = [%i]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index[%li] = [%i]\n", node->index, node->n);
	if (node->n == value)
		return (node);
	return (NULL);
}
