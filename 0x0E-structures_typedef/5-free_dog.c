#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - Frees dogs
  *@d: pointer to a dog_t variable
  *Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
