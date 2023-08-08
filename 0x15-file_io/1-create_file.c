#include <stdlib.h>
#include "main.h"
/**
  *create_file - Creates a file.
  *@filename: variable
  *@text_content: variable
  *Return: 1  or -1
  */
int create_file(const char *filename, char *text_content)
{
	int fp, n;

	fp = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fp == -1 || !filename)
	{
		return (-1);
	}
	for (n = 0; text_content[n]; n++)
	write(fp, text_content, n);
	close(fp);
	return (1);
}
