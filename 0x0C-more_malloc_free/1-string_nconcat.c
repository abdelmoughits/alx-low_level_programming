#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
  *string_nconcat - Concatenates two strings.
  *@s1: pointer to a char variable
  *@s2: pointer to a char variable
  *@n: unsigned intiger variable
  *Return: space in memory, which contains s1,
  *followed by the first n bytes of s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, b, len1, len2;
	char *ptr;

	i = b = len1 = len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1])
		{
			len1++;
		}
	}
	if (s2 != NULL && n > 0)
	{
		i = 0;
		while (s2[len2])
		{
			len2++;
		}
	}
	b = len1 + len2 + 1;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1 ; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0 ; i < len2 ; i++)
	{
		ptr[i + len1] = s2[i];
		if (i == n - 1)
		{
			break;
		}
	}
	ptr[b - 1] = '\0';
	return (ptr);
}
