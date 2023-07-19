#include "function_pointers.h"
#include <stddef.h>
/**
  *array_iterator - Executes a function given as a
  *parameter on each element of an array
  *@array: pointer to an array of integers
  *@size: size_t vari variable
  *@action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
