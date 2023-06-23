#include "main.h"
/**
  *print_line - Draws a straight line in the terminal.
  *@n: intiger variable
  *Return: noit exist
  */
void print_line(int n)
{
	if (n > 0)
	{
		for (n = n ; n > 0 ; n--)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
