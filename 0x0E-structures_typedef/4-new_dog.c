#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - Creates a new dog.
  *@name: pointer to char variable
  *@owner: pointer to char variable
  *@age: float variable
  *Return: the adress of the variable of type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}

