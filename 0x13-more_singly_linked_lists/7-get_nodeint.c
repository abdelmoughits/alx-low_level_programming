#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
  *@head: pointer to a listint_t variable
  *@index: unsigned integer variable
  *Return:  the nth node of a listint_t linked list.
  *or if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	p = head;
	while (p != NULL && i != index)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
