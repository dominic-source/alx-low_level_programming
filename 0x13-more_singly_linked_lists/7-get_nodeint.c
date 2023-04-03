#include "lists.h"

/**
 * get_nodeint_at_index - get node at a particular index
 * @head: head of the list of elements
 * @index: index of the node to retrieve
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hold;
	unsigned int i;

	hold = head;
	for (i = 0; i < index && hold != NULL; i++)
		hold = hold->next;
	if (hold == NULL)
		return (NULL);
	return (hold);
}
