#include <stdlib.h>
#include "main.h"
/**
  *binary_to_uint - Converts a binary number to an unsigned int.
  *@b: pointer to a char constent
  *Return: the number or 0 there is one or more
  *chars in the string b that is not 0 or 1 b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' &&  b[i] != '1')
		{
			return (0);
		}
		num *= 2;
		num += b[i] - 48;
		i++;
	}
	return (num);
}
