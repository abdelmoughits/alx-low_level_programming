#include <stdio.h>
/**
 *main -Entry point
 *Return: always 0
 */
int main(void)
{
	int i = 97;

	int b = 122;

	while (i <= b)
	{
		putchar(i);
		if (i == 122)
		{
			i = 64;
			b = 90;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
