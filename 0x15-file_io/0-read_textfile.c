#include "main.h"
#include <stdlib.h>
/**
  *read_textfile - Reads a text file and prints it to the POSIX standard output
  *@filename: the name of the file
  *@letters: size_t variable
  *Return: number of letters it could read and print
  *if the file can not be opened or read, return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t n, p;
	char *ptr;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	ptr = malloc(letters + 1);
	if (!ptr)
	{
		close(fp);
		return (0);
	}
	n = read(fp, ptr, letters);
	if (n == -1)
	{
		free(ptr);
		close(fp);
		return (0);
	}
	p = write(STDOUT_FILENO, ptr, n);
	free(ptr);
	close(fp);
	return (p);
}
