#include "main.h"
/**
  *puts_half - Prints half of a string, followed by a new line
  *@str: pointer to an intiger variable
  *Return: nothing
  */
void puts_half(char *str)
{
	int i, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	count--;
 	for (i = (count / 2) + 1 ; i <= count ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
