#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  *sum_listint - Returns the sum of all the data (n)
  *of a listint_t linked list.
  *@head: pointer to an integer variable
  *Return: the sum of all the data (n)
  *or 0 if list is impty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
