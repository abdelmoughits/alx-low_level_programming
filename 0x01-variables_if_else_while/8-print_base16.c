#include <stdio.h>
/**
 *main -Entry point
 *Return: always 0
 */
int main(void)
{
	int i = 48;

	int b = 57;

	while (i <= b)
	{
		putchar(i);
		if (i == 57)
		{
			i = 96;
			b = 102;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
