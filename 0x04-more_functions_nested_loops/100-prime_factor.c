#include <stdio.h>
/**
  *main - Prints the largest prime factor of the number 612852475143,
  *followed by a new line.
  *Return: always 0
  */
int main(void)
{
	long int nu = 10;

	int i;

	for (i = 2 ; i <= nu ; i++)
	{
		while (nu % i == 0)
		{
			nu = nu / i;
			printf("nu: %ld\n", nu);
			printf("i: %d\n", i);
		}
		if (nu / i == 1)
		{
			printf("nu again: %ld\n", nu);
			printf("i again: %d\n", i);
			break;
		}
	}
	return (0);
}
