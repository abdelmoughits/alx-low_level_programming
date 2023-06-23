#include "main.h"
/**
  *print_diagonal - Draws a diagonal line in the terminal.
  *@n: intiger variable
  *Return: noit exist
  */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b <= a ; b++)
			{
				if (b != a)
				{
					_putchar(32);
				}
				if (b == a)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
}
