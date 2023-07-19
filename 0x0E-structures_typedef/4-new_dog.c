#include <stdlib.h>
#include "dog.h"
/**
  *len - Calculate the lenght of a string
  *@s: pointer to a string variable
  *Return: the lenght
  */
int len(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i++;
	return (i);
}
/**
  *_copy - Copy src to dest
  *@dest: pointer to a char variable
  *@src: pointer to a char variable
  *Return: the adress of dest
  */
char *_copy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  *new_dog - Creates a new dog.
  *@name: pointer to char variable
  *@owner: pointer to char variable
  *@age: float variable
  *Return: the adress of the variable of type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	len1 = len(name) + 1;
	len2 = len(owner) + 1;

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * len1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * len2);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	_copy(new_dog->name, name);
	_copy(new_dog->owner, owner);
	return (new_dog);
}

