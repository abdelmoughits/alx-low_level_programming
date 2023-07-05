#include "main.h"
/**
  *_print_rev_recursion - Prints a string in reverse.
  *@s: pointer to a char variable
  *Return: nothing
  */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
