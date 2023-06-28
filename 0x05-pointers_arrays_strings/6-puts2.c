#include "main.h"
/**
  *puts2 - Prints every other character of a string
  *@str: pointer to a variable of type intiger
  *Return: nothing
  */
void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num += 2;
	}
	_putchar('\n');
}
