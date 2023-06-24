#include <stdio.h>
/**
  *main - Prints the largest prime factor of the number 612852475143,
  *followed by a new line.
  *Return: always 0
  */
int main(void)
{
	long int nu = 612852475143;

	int i;

	for (i = 2 ; i <= nu ; i++)
	{
		while (nu % i == 0)
		{
			nu = nu / i;
		}
		if (nu / i == 1)
		{
			printf("%ld\n", nu);
			break;
		}
	}
	return (0);
}
