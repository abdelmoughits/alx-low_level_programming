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
	int i, a, b;
	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		for (i = 0 ; accept[i] ; i++)
		{
			if (accept[i] == s[a])
			{
				b = 1;
				break;
			}
		}
		if (b == 0)
		{
			val++;
		}
		a++;
	}
	return (val);
}
