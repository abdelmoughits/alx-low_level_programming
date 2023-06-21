#include <stdio.h>
#include "main.h"
/**
  *times_table - rints the 9 times table, starting with 0.
  *Return: not exist
  */

void times_table(void)
{
	int h, m, b, c, d;

	for (h = 0 ; h <= 9 ; h++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			b = m * h;
			d = b % 10;
			c = b / 10;
			if (c == 0 && m != 0)
			{
				_putchar(32);
			}
			else
			{
				if (m != 0)
				{
					_putchar(c + 48);
				}
			}
			_putchar(d + 48);
			if (m != 9)
			{
				_putchar(44);
				_putchar(32);
			}

		}
		_putchar('\n');
	}
}
