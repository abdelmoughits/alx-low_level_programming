#include <stdlib.h>
/**
  *str_concat - Concatenates two strings.
  *@s1: pointer to a char variable
  *@s2: pointer to a char variable
  *Return: pointer should point to a newly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptr;

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0 ; i < len2 ; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
