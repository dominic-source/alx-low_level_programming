#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: has the address of the head node
 * @n: the number to add
 * Return: address of new node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t **hold_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		node->next = NULL;
		hold_node = &((*head)->next);
		while (*hold_node != NULL)
			hold_node = &((*hold_node)->next);
		*hold_node = node;
	}
	return (node);
}
