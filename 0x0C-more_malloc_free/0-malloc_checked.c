#include <stdlib.h>
#include "main.h"
/**
  *malloc_checked - Allocates memory using malloc.
  *@b: unsigned intiger
  *Return:  a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}