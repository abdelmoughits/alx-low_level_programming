#include <stdio.h>
/**
 *main -Entry point
 *Return: always 0
 */
int main(void)
{
	int i;

	char ch[] = "bcdfghijklmnopqrstuvwxyz\n";

	for (i = 0 ; i < 27 ; i++)
		putchar(ch[i]);
	return (0);
}
