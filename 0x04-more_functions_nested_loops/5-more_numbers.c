#include "main.h"
/**
  *more_numbers - Prints 10 times the numbers, from 0 to 14,
  * followed by a new line.
  *Return: not exist
  */
void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0 ; a < 10 ; ++a)
	{
		for (b = 0 ; b < 15 ; b++)
		{
			if (b >= 10)
			{
				c = b / 10;
				_putchar(c + 48);
			}
			d = b % 10;
			_putchar(d + 48);
		}
		_putchar('\n');
	}
}
