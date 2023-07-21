#include <stdarg.h>
/**
  *sum_them_all - Returns the sum of all its parameters.
  *@n: a const unsigned int variablez
  *@...: more variables
  *Return: the sum of all its parameters.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result, i = 0;
	va_list elem;

	result = 0;

	va_start(elem, n);
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		result += va_arg(elem, int);
		i++;
	}
	va_end(elem);
	return (result);

}
