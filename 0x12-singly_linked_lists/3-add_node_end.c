#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_node_end - Adds a new node at the beginning of a list_t list.
  *@head: pointer to apointer to list_t struct
  *@str: pointer to constent char pointer
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = new;
	}
	return (new);
}
