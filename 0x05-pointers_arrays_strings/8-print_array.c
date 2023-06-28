#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *print_array - Prints n elements of an array of integers
  *, followed by a new line.
  *@a: pointer to an intiger array
  *@n: a variable of type intiger
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
