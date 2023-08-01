#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_nodeint - Adds a new node at the beginning of a listint_t list.
  *@head: pointer to a pointer to listint_t variable
  *@n: constant intiger variable
  *Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

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
		new->next = *head;
		*head = new;
	}
	return (new);
}
