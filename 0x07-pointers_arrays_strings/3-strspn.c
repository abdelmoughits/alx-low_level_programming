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
	unsigned int val = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (accept[i] == *s)
			{
				val++;
				break;
			}
			s++;
		}
	}
	return (val);
}
