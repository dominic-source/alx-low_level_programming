#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a particular index
 * @head: head of the element
 * @index: index of the node to delete
 * Return: 1 if succeeded, 0 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **hold;
	listint_t *del;
	unsigned int i;

	hold = head;
	if (hold == NULL)
		return (-1);

	if (index == 0)
	{
		if (*hold == NULL)
		{
			del = *head;
			*head = NULL;
			free(del);
			return (1);
		}
		del = *head;
		*head = (*hold)->next;
		free(del);
		return (1);
	}
	for (i = 0; i < index && *hold != NULL; i++)
		hold = &((*hold)->next);
	if (*hold == NULL && i < index)
		return (-1);
	del = *hold;
	*hold = (*hold)->next;
	free(del);
	return (1);
}
