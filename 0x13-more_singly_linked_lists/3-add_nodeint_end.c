#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint_end - Adds a new node at the end of a listint_t list.
  *@head: pointer to a pointer to a listint_t variable
  *@n: constent intiger variable
  *Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;

	}
	return (new);
}
