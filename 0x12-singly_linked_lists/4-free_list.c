#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *free_list - Frees a list_t list.
  *@head: pointer to a list_t type
  *Return: nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
