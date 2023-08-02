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
	listint_t *p;
	listint_t *tpn;

	p = *head;
	tpn = get_nodeint_at_index(p, idx - 1);
	p = get_nodeint_at_index(p, idx);
	new = malloc(sizeof(listint_t));
	if (tpn == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = p;
	tpn->next = new;
	return (new);
}
/**
  *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
  *@head: pointer to a listint_t variable
  *@index: unsigned integer variable
  *Return:  the nth node of a listint_t linked list.
  *or if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	p = head;
	while (p != NULL && i != index)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
