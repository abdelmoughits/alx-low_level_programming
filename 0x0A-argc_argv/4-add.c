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
	int count, i1, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1 ; count < argc ; count++)
	{
		if ((argv[count][0] <= '9' && argv[count][0] >= '0') || argv[count][0] == '-')
		{
			i1 = atoi(argv[count]);
			if (i1 < 0)
			{
				continue;
			}
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
