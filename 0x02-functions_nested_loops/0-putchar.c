#include <stdio.h>
#include "main.h"
/**
  *main -Entry point
  *Return: always 0
  */
int main(void)
{
	char put[] = "_putchar\n";
	long unsigned int i;

	for (i = 0 ; i < sizeof(put) ; i++)
	{
		_putchar(put[i]);
	}
	return (0);
}
