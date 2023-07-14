#include <stdlib.h>
#include "main.h"
/**
  *_calloc - Aallocates memory for an array, using malloc.
  *@nmeb: unsigned intiger variable
  *@size: unsigned intiger variable
  *Return: a pointer to the allocated memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < (size * nmemb) ; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
