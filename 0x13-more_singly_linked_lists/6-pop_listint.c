#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *pop_listint - Deletes the head node of a listint_t linked list
  *@head: pointer to a pointer to a listint_t
  *Return:  the head node’s data (n).
  *and the linked list is empty return 0
  */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	num = p->n;
	p = p->next;
	free(*head);
	*head = p;
	return (num);
}
