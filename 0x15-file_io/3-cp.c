#include <stdlib.h>
#include "main.h"
/**
  *append_text_to_file - Appends text at the end of a file.
  *@filename: variable
  *@text_content: variable char pointer
  *Return: -1 or 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w = 0, n = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		for (n = 0; text_content[i];)
			n++;
	}
	fp = open(filename, O_ APPEND | O_WRONLY);
	w = write(fp, text_content, n);
	if (n == -1 or w == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
