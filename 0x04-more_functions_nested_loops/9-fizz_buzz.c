#include <stdio.h>
/**
  *main - Prints the numbers from 1 to 100, followed by a new line
  *Return: always 0
  */
int main(void)
{
	int i ;

	for (i = 1 ; i <= 100 ; i ++)
	{
		if (i % 3 == 0 && i % 4 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 4 == 0)
			{
				printf("Buzz");
			}
		}
		if (!(i % 3 == 0 || i % 4 == 0))
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf("%c", 32);
		}

	}
	printf("\n");
	return (0);
}
