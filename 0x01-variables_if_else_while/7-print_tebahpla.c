#include <stdio.h>
/**
 *main -Entry point
 *Return: always 0
 */
int main(void)
{
	int i = 97;

	int b = 122;

	while (b >= i)
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
