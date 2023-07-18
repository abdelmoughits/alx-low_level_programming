#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - a new type struct dog
  *@d: pointer to a struct dog variable
  *@name: char pointer
  *@owner: char pointer
  *@age: float variable
  *Description: a new type struct dog with the following elements
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
}
