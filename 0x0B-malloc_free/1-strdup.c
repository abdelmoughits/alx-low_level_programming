#include <stdlib.h>
/**
  *_strdup - Contains a copy of the string given as a
  *@str: pointer to a char variable
  *Return: a pointer to the copy of str
  */
char *_strdup(char *str)
{
	int i, b;
	char *array;

	for (b = 0 ; str != NULL && str[b] != '\0'; b++)
	array = malloc(sizeof(char) * b);
	if (array == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < b ; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
