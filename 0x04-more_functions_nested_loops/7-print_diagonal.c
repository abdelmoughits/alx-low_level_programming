#include "main.h"
/**
  *print_diagonal - Draws a diagonal line in the terminal.
  *@n: intiger variable
  *Return: noit exist
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		n -= n;

		for (n = n ; n > 0 ; n--)
		{
			_putchar(32);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
