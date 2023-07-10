#include <stdio.h>
/**
  *main - Prints the number of arguments passed into it.
  *@argc: parameter counter
  *@argv: vector string
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
