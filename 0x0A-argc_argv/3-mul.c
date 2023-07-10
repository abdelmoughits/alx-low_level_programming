#include <stdio.h>
#include <stdlib.h>
/**
  *main - Prints the number
  *@argc: parameter counter
  *@argv: vector string
  *Return: always 1 or result
  */
int main(int argc, char *argv[])
{
	int i1, i2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);
	printf("%d\n", i1 * i2);
	return (0);
}
