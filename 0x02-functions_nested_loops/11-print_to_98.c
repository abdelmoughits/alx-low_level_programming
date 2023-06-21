#include <stdio.h>
#include <stdlib.h>
#include"main.h"
/**
  *print_to_98 - Prints all natural numbers from n to 98,
  *followed by a new line.
  *@n: number of type intiger
  *Return: not exist
  */
void print_to_98(int n)
{
	int a, b;

	while (n <= 98 || n > 98)
	{
		a = n / 10;
		b = n % 10;
		if (n < 98)
		{
			a = abs(a);
			b = abs(b);
			_putchar(45);
		}
		if (a != 0)
		{
			_putchar(a + 48);
		}
		_putchar(b + 48);
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
