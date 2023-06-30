#include <stdbool.h>
/**
  *_strcat - Concatenates two strings
  *@dest: pointer: to the char variable
  *@src: pointer to the char variable
  *Return:pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int b = 0;
	bool tf = true;

	while (1)
	{
		if (dest[i] == '\0' && tf == true)
		{
			tf = false;
		}
		if (tf == false)
		{
			dest[i] = src[b];
			if (src[b] == '\0')
			{
				return (dest);
			}
			b++;
		}
		i++;
	}
}
