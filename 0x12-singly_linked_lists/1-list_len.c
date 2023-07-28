#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *list_len - Prints all the elements of a list_t list.
  *@h: a constant new type pointer
  *Return: the number of nodes, If str is NULL, print [0] (nil)
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
