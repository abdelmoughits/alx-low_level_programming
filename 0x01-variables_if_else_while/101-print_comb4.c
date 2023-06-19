#include <stdio.h>
/**
  *main -Entry point
  *Return: always 0
  */
int main(void)
{
	int a, b, c;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			for (c = 0 ; c < 10 ; c++)
			{
				if (!(a < b && b < c))
				{
					continue;
				}
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);
				if (a == 7)
				{
					putchar('\n');
					continue;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
