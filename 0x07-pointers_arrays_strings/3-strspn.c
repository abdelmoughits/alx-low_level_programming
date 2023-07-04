#include "main.h"
/**
  *_strspn - Gets the length of a prefix substring.
  *@s: pointer to a char variable
  *@accept: pointer to a char variable
  *Return: an intiger value
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, b, val, c = 0;

	val = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c = 0;
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[i] == accept[b])
			{
				c = 1;
				break;
			}
		}
		if (c == 0)
		{
			val++;
		}
	}
	return (val);
}
