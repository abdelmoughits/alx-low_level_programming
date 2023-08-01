#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *free_listint2 - Prints all the elements of a listint_t list.
  *@head: constent pointer of type listint_t
  *Return: the number of nodes
  */
void free_listint2(listint_t **head)
{
	listint_t *p;
	listint_t *tm;

	while (*head != NULL)
	{
		tm = *head;
		p = tm->next;
		free(*head);
		*head = p;
	}
}
