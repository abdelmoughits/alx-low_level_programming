#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - Prints numbers, followed by a new line.
  *@separator: pointer to a char variable
  *@n: a variable of type const unsigned
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int elem;
	va_list ap;

	if (n == 0)
	{
		return;
	}
	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		elem = va_arg(ap, int);
		printf("%d", elem);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
