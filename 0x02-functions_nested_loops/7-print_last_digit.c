#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *print_last_digit - Prints the last digit of the number
  *@n: the input number as an integer
  *Return: the value of the last digit
  */
int print_last_digit(int n)
{
	n = abs(n);
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
