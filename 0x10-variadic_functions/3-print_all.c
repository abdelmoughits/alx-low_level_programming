#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - Print anything
  *@format: pointer to a constant value and adress of a char
  *@...: other parameters
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *ss;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				ss = va_arg(ap, char *);
				if (ss == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ss);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
