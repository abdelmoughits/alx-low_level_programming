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
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
