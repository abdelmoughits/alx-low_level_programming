#include "main.h"
#include <stdio.h>

/**
  *rev_string - Prints a string, in reverse, followed by a new line.
  *@s: a pointer to a char variable
  *Return: nothing
  */
void rev_string(char *s)
{
	int i, len = 0;
	char rev;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	len--;
	i = 0;
	while (i <= len / 2)
	{
		rev = *(s - i);
		*(s - i) = *(s - len + i);
		*(s - len + i) = rev;
		i++;

	}
}
