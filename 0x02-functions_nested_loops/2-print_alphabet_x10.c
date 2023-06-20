#include "main.h"
/**
*print_alphabet_x10 -Prints 10 times the alphabet, in lowercase
*Return: always 0
*/
void print_alphabet_x10(void)
{
	int i, b;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (b = 97 ; b <= 122 ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
