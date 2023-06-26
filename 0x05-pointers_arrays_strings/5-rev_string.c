#include "main.h"
#include <stdio.h>

/**
  *rev_string - Prints a string, in reverse, followed by a new line.
  *@s: a pointer to a char variable
  *Return: nothing
  */
void rev_string(char *s)
{
	int len = 0;
	char rev;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	len--;
	len = len/2;
	for (len = len ; len >= 0 ; len--)
	{
		rev = *s;
		*s = *(s - len * 2);
		*(s - len * 2) = rev;
		s--;
	}
}
