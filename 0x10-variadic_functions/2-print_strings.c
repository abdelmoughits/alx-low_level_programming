#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - Prints numbers, followed by a new line.
  *@separator: pointer to a char variable
  *@n: a variable of type const unsigned
  *Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *elem;
	va_list ap;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		elem = va_arg(ap, char *);
		if (elem == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", elem);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
