#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *print_to_98 - Prints all natural numbers from n to 98,
  *followed by a new line.
  *@n: number of type intiger
  *Return: not exist
  */
void print_to_98(int n)
{
	int a, b, c;

	while (1)
	{
		a = n / 10;
		b = n % 10;
		c = 1;
		if (n < 0)
		{
			a = abs(a);
			_putchar(45);
		}
		if (a != 0)
		{
			while (a > 9)
			{
				c++;
				a = a / 10;
			}
			do
			{
				a = a / (10 ** c);
				c--;
				_putchar(a + 48);

			}while(c > 0)
		}
		if (n == 98)
		{
			_putchar('\n');
			break;
		}
		_putchar(44);
		_putchar(32);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
}
