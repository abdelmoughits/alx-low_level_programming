#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
   *main - Copies the content of a file to another file.
   *@argc: intiger variable
   *@argv: pointer to an aray of arguments
   *Return: 1 or -1
*/
int main(int argc, char *argv[])
{
	int fp = 0, fd = 0, rf = 1, rf2 = 1;
	char text[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp = open(argv[1], O_RDONLY);
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fp != -1 && fd != -1)
	{
		while (rf > 0 && rf2 > 0)
		{
			rf = read(fp, text, 1024);
			rf2 = write(fd, text, rf);
		}
	}
	if (rf == -1 || fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (rf2 == -1 || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	exit(0);
}
