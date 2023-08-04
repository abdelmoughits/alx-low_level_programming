#include <stdio.h>
#include "main.h"
/**
  *print_binary - Prints the binary representation of a number.
  *@n: variable
  *Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int b;
	int i = 63, c = 0;

	while (i >= 0)
	{
		b = n >> i;
		if (b & 1)
		{
			_putchar('1');
			c = 1;
		}
		else if (c)
		{
			_putchar('0');
		}
		i--;
	}
	if (!c)
	{
		_putchar('0');
	}
}
