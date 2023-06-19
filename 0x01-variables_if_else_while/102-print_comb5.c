#include <stdio.h>
/**
  *main -Entry point
  *Return: always 0
  */
int main(void)
{
	int a, b, c, d, e, f;

	for (a = 0 ; a <= 99 ; a++)
	{
		c = a / 10;
		d = a % 10;

		for (b = 0 ; b <= 99 ; b++)
		{
			e = b / 10;
			f = b % 10;

			if (a >= b)
			{
				continue;
			}
			putchar(c + 48);
			putchar(d + 48);
			putchar(32);
			putchar(e + 48);
			putchar(f + 48);
			if (a == 98 && b == 99)
			{
				putchar('\n');
				continue;
			}
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
