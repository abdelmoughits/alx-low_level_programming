#include "main.h"
#include <stdio.h>
/**
  *puts2 - Prints every other character of a string
  *@str: pointer to a variable of type intiger
  *Return: nothing
  */
void puts2(char *str)
{
	int num;

	while (*str != '\0')
	{
		num = *str - '0';
		if (num % 2 == 0)
		{
			_putchar(num + 48);
		}
		str++;
	}
	_putchar('\n');
}
