#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *free_listint - Prints all the elements of a listint_t list.
  *@head: constent pointer of type listint_t
  *Return: the number of nodes
  */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
