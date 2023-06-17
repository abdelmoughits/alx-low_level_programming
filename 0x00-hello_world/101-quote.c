#include <stdio.h>
#include <unistd.h>
/**
  *main -Entry point
  *Return: 1
  */
int main(void)
{
	char mes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int b = sizeof(mes);

	write(1, mes, b);
	return (1);
}
