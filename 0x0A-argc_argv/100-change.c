#include <stdio.h>
#include <stdlib.h>
/**
  *main - Prints the minimum number of coins to make
  *change for an amount of money.
  *@argc: the number o parameters
  *@argv: vector pointer
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int arr[] = {25, 10, 5, 2, 1};
	int n, i, t = 0;

	i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	while (1)
	{
		if (n % arr[i] == 0)
		{
			t += n / arr[i];
			printf("%d\n", t);
			return (t);
		}
		else if (n / arr[i] ==  0)
		{
			i++;
			continue;
		}
		else if (n / arr[i] > 0)
		{
			t += n / arr[i];
			n = n % arr[i];
			i++;
		}
	}
}
