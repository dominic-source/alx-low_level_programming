#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds node at the end of list
 * @head: pointer to a pointer to an address
 * @str: string
 * Return: pointer to a str
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t **hld;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = NULL;
		hld = &((*head)->next);
		while (*hld != NULL)
			hld = &((*hld)->next);
		*hld = new;
	}
	return (new);
}
