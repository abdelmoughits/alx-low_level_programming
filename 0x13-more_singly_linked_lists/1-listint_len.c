#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *listint_len - Prints the lenght
  *@h: constent pointer of type listint_t
  *Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
