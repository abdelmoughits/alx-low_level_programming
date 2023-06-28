#include <stdbool.h>
#include "main.h"
/**
  *_strcpy - Copies the string pointed to by src
  *to the buffer pointed to by dest
  *@dest: pointer to the byffer dest
  *@src: pointer to the string src
  *Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	bool t = true;
	int i = 0;

	while (t == true)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			t = false;
		}
	}
	return (dest);
}
