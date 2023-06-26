#include <stdio.h>
/**
  *_strlen - Returns the length of a string.
  *@s: pointer to a variable of type char
  *Return: the length of a string
  */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}
