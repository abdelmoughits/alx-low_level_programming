#include <stdio.h>
/**
  *main -Entry point
  *Return: 1
  */
int main(void)
{
	int i;
	char mes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int b = sizeof(mes);

	for (i = 0 ; i < b ; i++)
	{
		putchar(mes[i]);
	}
	return (1);
}
