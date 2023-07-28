#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *print_list - Prints all the elements of a list_t list.
  *@h: a constant new type pointer
  *Return: the number of nodes, If str is NULL, print [0] (nil)
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
