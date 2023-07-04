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

	while(*s)
	{
		for (b = 0 ; accept[i] ; i++)
		{
			if (accept[b] == s[i])
			{
				val++;
				break;
			}
		}
		else if (accept[i + 1] == '\0')
		{
			return (val);
		}
		s++;
	}
	return (val); 
}
