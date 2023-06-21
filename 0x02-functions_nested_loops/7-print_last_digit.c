#include "main.h"
#include <stdio.h>
/**
  *print_last_digit - Prints the last digit of the number
  *@n: the input number as an integer
  *Return: the value of the last digit
  */
int print_last_digit(int n)
{
	n = _abs(n);
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
