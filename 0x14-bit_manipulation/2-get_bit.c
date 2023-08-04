#include "main.h"
/**
  *get_bit - Returns the value of a bit at a given index.
  *@index: variable
  *@n: variable
  *Return: the value of a bit at a given index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 63)
	{
		return (-1);
	}
	i = i << index;
	i = i & n;
	if (i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
