#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
  *insert_nodeint_at_index - Inserts a new node at a given position.
  *@head: pointer to a pointer to a listint_t variable
  *@idx: unsigned intiger vareiable
  *@n:intiger variable
  *Return:  the address of the new node, or NULL if it failed
  *or if it is not possible to add the new node at index idx
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tpn;
	unsigned int i = 0;

	tpn = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i != idx - 1 && !tpn)
	{
		tpn = tpn->next;
		i++;
	}
	if (!tpn && i != idx)
	{
		return (NULL);
	}
	new->next = tpn->next;
	tpn->next = new;
	return (new);
}
