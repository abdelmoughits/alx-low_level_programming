#include "main.h"
/**
  *print_triangle - Prints a triangle, followed by a new line.
  *@size: intiger variable
  *Return: not exist
  */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				if (b < size - a)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}

