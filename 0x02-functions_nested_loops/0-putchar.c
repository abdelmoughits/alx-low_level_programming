#include <stdio.h>
#include <unistd.h>
/**
  *main -Entry point
  *Return: always 0
  */
int main(void)
{
	char put[] = "_putchar\n";
	write(1, put, sizeof(put) - 1);
	return (0);
}
