#include <stdio.h>
#include <stdbool.h>
/**
  *_strncat - Concatenates two strings.
  *@dest: pointer to the char variable
  *@src: pointer to the char variable
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int b, i = 0;
	bool tf = true;

	b = 0;

	while (b < n)
	{
		if (dest[i] == '\0' && tf == true)
		{
			tf = false;
		}
		if (tf == false)
		{
			dest[i] = src[b];
			b++;
		}
		if (src[b] == '\0')
		{	
			dest[i + 1] = src[b];
			break;
		}
		i++;
	}
	return (dest);
}
