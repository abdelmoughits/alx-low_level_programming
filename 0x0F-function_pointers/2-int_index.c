#include "function_pointers.h"
/**
  *int_index - Searches for an intiger
  *@array: pointer to an array
  *@size: intiger variable
  *@cmp: pointer to a function
  *Return: i or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
