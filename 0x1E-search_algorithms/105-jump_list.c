#include "search_algos.h"
#include <math.h>

/**
 * jump_list - implement an advance jump using linked list
 *
 * @list: a pointer to a list
 * @size: the size of the list
 * @value: the value of the list
 * Return: NULL or pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *pnode = NULL;
	size_t jump = sqrt(size), i;

	if (list == NULL)
		return (NULL);

	while (list->n < value && list->next != NULL)
	{
		pnode = list;
		for (i = 0; i < jump && list->next != NULL; i++)
			list = list->next;
		printf("Value checked at index [%li] = [%i]\n", list->index, list->n);
	}
	printf("Value found between indexes [%li] and [%li]\n",
			pnode->index, list->index);
	while (pnode != NULL && pnode->index <= list->index)
	{
		printf("Value checked at index [%li] = [%i]\n", pnode->index, pnode->n);
		if (pnode->n == value)
			return (pnode);
		pnode = pnode->next;
	}
	return (NULL);
}
