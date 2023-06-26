#include "main.h"
#include <stdio.h>

/**
  *print_rev - Prints a string, in reverse, followed by a new line.
  *@s: a pointer to a char variable
  *Return: nothing
  */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len >= 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
