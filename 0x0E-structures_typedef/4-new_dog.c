#include "dog.h"
/**
  *new_dog - Creates a new dog.
  *@name: pointer to char variable
  *@owner: pointer to char variable
  *@age: float variable
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (new_dog == NULL)
	{
		return(NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}

