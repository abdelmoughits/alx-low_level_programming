#include "main.h"
/**
  *clear_bit - Sets the value of a bit to 1 at a given index.
  *@index: variable
  *@n: variable
  *Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
	{
		return (-1);
	}
	i = ~(i << index);
	*n = i & *n;
	return (1);
}
