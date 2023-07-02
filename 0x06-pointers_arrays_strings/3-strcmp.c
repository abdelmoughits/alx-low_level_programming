#include <stdio.h>
/**
  *_strcmp - Compares two strings.
  *@s1: pointer to a char variable
  *@s2: pointer to a variable
  *Return: intiger value
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
