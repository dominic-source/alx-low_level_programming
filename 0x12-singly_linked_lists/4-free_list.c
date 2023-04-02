#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees head
 * @head: The connection to the linked list
 */
void free_list(list_t *head)
{
	list_t *h = head;

	while (h->next != NULL)
	{
		free(h->str);
		free(h);
		h = h->next;
	}
	free(h->str);
	free(h);
}
