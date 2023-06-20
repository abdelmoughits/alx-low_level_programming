#include "main.h"
/**
*print_alphabet_x10 -Prints 10 times the alphabet, in lowercase, followed by a new line.
*Return: always 0
*/
void print_alphabet_x10(void)
{
	int i, b;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (b = 97 ; b <= 122 ; b++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
