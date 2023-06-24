#include "main.h"
/**
  *the_number - Print the gigites of an intiger one by one.
  *@n: intiger variable
  */
void the_number(int n);
/**
  *print_number - Prints an integer.
  *@n: intiger variable
  *Return: not exist
  */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(48);
	}
	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	the_number(n);
	_putchar('\n');
}

/**
 *the_number - Print the gigites of an intiger one by one.
 *@n: intiger variable
 */
void the_number(int n)
{
	if (n % 10 != 0 || n / 10 != 0)
	{
		the_number(n / 10);
		_putchar(n % 10 + 48);
	}
}
