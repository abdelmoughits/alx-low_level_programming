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
	int i, b, c;

	for (i = 0 ; s[i] != '\0' ; i++)
	{	c = 0;
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (accept[b] == s[i])
				val++; }}
	return (val); }
