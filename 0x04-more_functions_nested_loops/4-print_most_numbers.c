#include "main.h"
/**
  *print_most_numbers - Prints the numbers, from 0 to 9, exept 2 and 4,
  *followed by a new line
  *Return: not existe
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}