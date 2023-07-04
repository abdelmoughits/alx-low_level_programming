#include "main.h"
#include <stdio.h>
/**
  *_strspn - Gets the length of a prefix substring.
  *@s: pointer to a char variable
  *@accept: pointer to a char variable
  *Return: an intiger value
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, b, val = 0;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (b = 0 ; s[b] != '\0' ; b++)
		{
			if (accept[b] == s[i])
			{
				val++;
			}
		}
	}
	return ( i + b - val);
}
