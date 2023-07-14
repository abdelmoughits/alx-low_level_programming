#include <stdlib.h>
#include "main.h"
/**
  *alloc_grid - a pointer to a 2 dimensional array of integers.
  *@width: intiger variable
  *@height: intiger variabe
  *Return: a pointer to a 2 dimensional array of integers.
  */
int **alloc_grid(int width, int height)
{
	int j, i = 0;
	int **arrd;

	if (width * height <= 0)
	{
		return (NULL);
	}
	arrd = (int **)malloc(sizeof(int *) * width);
	if (arrd == NULL)
	{
		return (NULL);
	}
	while (i < width)
	{
		arrd[i] = (int *)malloc(sizeof(int) * height);
		if (arrd[i] == NULL)
		{
			for (i-- ; i >= 0 ; i--)
			{
				free(arrd[i]);
			}
			free(arrd);
			return (NULL);
		}
		i++;
	}
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
		{
			arrd[i][j] = 0;
		}
	}
	return (arrd);
}
