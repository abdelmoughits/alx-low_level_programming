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
	int w, fp, n = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
	}
	fp = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	w = write(fp, text_content, n);
	if (fp == -1 || w == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
