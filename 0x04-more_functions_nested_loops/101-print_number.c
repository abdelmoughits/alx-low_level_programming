#include "main.h"
/**
  *print_number - Prints an integer.
  *@n: intiger variable
  *Return: not exist
  */
void the_number(int b);
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar(45);
		}
		the_number(n);

		_putchar('\n');
	}
}

/**
  *the_number - A recursive function
  *@b: intiger variable
  *Return: not exist
  */
void the_number(int b)
{
	if (b % 10 != 0 || b / 10 != 0)
	{
		the_number(b / 10);
		_putchar(b % 10 + 48);
	}
}
