#include <stdio.h>
#include "main.h"
/**
  *jack_bauer - Prints every minute of the day of Jack Bauer
  *Return: not exist
  */

void jack_bauer(void)
{
	int h, m, a, b, c, d;

	for (h = 0 ; h < 24 ; h++)
	{
		b = h % 10;
		a = h / 10;

		for (m = 0 ; m < 60 ; m++)
		{
			d = m % 10;
			c = m / 10;

			_putchar(a + 48);
			_putchar(b + 48);
			_putchar(58);
			_putchar(c + 48);
			_putchar(d + 48);
			_putchar('\n');
		}
	}
}
