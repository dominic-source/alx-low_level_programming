#include "lists.h"

/**
 * list_len - print length of list
 * @h: pointer to the address
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);

}
