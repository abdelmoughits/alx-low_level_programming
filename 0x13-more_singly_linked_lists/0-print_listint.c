#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *print_list - Prints all the elements of a listint_t list.
  *@h: constent pointer of type listint_t
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
