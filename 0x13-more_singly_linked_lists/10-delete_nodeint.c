#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *insert_nodeint_at_index - Inserts a new node at a given position.
  *@head: pointer to a pointer to a listint_t variable
  *@idx: unsigned intiger vareiable
  *@n:intiger variable
  *Return:  the address of the new node, or NULL if it failed
  *or if it is not possible to add the new node at index idx
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *tpn;
	unsigned int i = 0;

	tpn = *head;
	if (index == 0)
	{
		if (!tpn)
		{
			return (-1);
		}
		new = tpn->next;
		free(tpn);
		*head = new;
		return (1);
	}
	while (i != index - 1 && tpn)
	{
		tpn = tpn->next;
		i++;
	}
	if (i != index - 1 && !tpn)
	{
		return (-1);
	}
	new = tpn->next;
	new = new->next;
	free(tpn->next);
	tpn->next = new;
	return (1);
}
