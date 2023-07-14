#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: intiger variable
  *@max: intiger variable
  *Return:  the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min  > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; min <= max ; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
