#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head of the element
 * Return: a pointer to the first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
  listint_t *hold_n;
  listint_t *hold_p;

  if (head  == NULL)
    return (NULL);

  hold_n = (*head)->next;
 hold_p = *head;

 (*head)->next = NULL;
 *head = hold_n;
 while (hold_n != NULL)
    {
      *head = hold_n;
      hold_n->next = hold_p;
      hold_p = hold_n;
      hold_n = hold_n->next;	  
    }
  return (*head);

}
