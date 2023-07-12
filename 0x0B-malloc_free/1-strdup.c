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

	b = sizeof(str);
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
