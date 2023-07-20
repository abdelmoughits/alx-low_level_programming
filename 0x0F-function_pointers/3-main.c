#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - The main function
  *@argc: intiger variable
  *@argv: pointer to an array of char
  *Return: always 0 (sucses)
  */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
