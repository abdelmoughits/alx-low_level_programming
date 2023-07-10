#include <stdio.h>
/**
  *main - Prints the number of arguments passed into it.
  *@argc: parameter counter
  *@argv: vector string
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
