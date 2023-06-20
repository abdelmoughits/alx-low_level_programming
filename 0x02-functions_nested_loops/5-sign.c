#include <stdio.h>
#include "main.h"
/**
  *print_sign - Shows 1 and print 1 if the input is an
  *positive number, return and print 0 if it is 0. Another casees return and shows
  *-1
  *@n: the number in ASCII code
  *Return: 1 if positive number,0 if it is 0 . -1 if it is negative
  */
int print_sign(int c)
{
	if (c > 0)
	{
		return (1);
		_putchar(43);
	}
	else if(c == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(43);
		_putchar(48);
	}
}
