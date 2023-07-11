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
	int count, i, i1, result = 0;
	int boo = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1 ; count < argc ; count++)
	{
		for (i = 0 ; argv[count][i] != '\0' ; i++)
		{
			if (!(argv[count][i] <= '9' && argv[count][i] >= '0'))
			{
				boo = 1;
			}
		}
		if (!boo)
		{
			i1 = atoi(argv[count]);
			result += i1;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
