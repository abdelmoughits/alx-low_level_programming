#include <stdlib.h>
#include "main.h"
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
	int i, b, len1, len2;
	char *ptr;
	i = b = len1 = len2 = 0;

	if (s1 != NULL)
	{
		wile (s1[i] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		wile (s2[i] != '\0')
		{
			len2++;
		}
	}
	b = len1 + len2 + 1;
	ptr = malloc (b);
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
	ptr[b] = '\0';
	return (ptr);
}
