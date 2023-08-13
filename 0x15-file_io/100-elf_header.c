#include <stdlib.h>
#include <elf.h>
#include "main.h"
void clode_ELF(int fd);
/**
  *main - work like readelf -h
  *@argc: integer hold the number of argument
  *@argv: char pointer to the array that hold arguments
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i, m = 0, fd = 0;
	unsigned char *ptr;
	Elf64_Ehdr *buffer;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: ./elf_header elf_filename\n");
		exit(98);
	}
	buffer = malloc(sizeof(Elf64_Ehdr));
	if (!buffer)
	{
		fprintf(stderr, "Error, the programme fielled\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		fprintf(stderr, "can't open the file\n");
		exit(98);
	}
	m = read(fd, buffer, sizeof(Elf64_Ehdr));
	if (m == -1)
	{
		free(buffer);
		fprintf(stderr, "can't read from the file\n");
		clode_ELF(fd);
		exit(98);
	}
	ptr = buffer->e_ident;
	if (ptr[EI_MAG0] == 0x7F &&
			ptr[EI_MAG1] == 'E' &&
			ptr[EI_MAG2] == 'L' &&
			ptr[EI_MAG3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		free(buffer);
		fprintf(stderr, "Not an ELF file\n");
		clode_ELF(fd);
		exit(98);
	}
	/*----------------------------------------------------*/
	/*print magic*/
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ptr[i]);
		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	/*----------------------------------------------------*/
	/*print class*/
	printf("  Class:                             ");
	if (ptr[EI_CLASS] == 0)
	{
		printf("Invalid class\n");
	}
	if (ptr[EI_CLASS] == 1)
	{
		printf("ELF32\n");
	}
	if (ptr[EI_CLASS] == 2)
	{
		printf("ELF64\n");
	}
	/*-----------------------------------------------------*/
	/*print data*/
	printf("  Data:                              2's complement, ");
	if (ptr[EI_DATA] == 0)
	{
		printf("Invalid data encoding\n");
	}
	if (ptr[EI_DATA] == 1)
	{
		printf("little endian\n");
	}
	if (ptr[EI_DATA] == 2)
	{
		printf("big endian\n");
	}
	/*-----------------------------------------------------*/
	/*print version*/
	printf("  Version:                           ");
	if (ptr[EI_VERSION] == EV_CURRENT)
	{
		printf("%d (current)\n", EV_CURRENT);
	}
	else
	{
		printf("Invalid version\n");
	}
	/*-----------------------------------------------------*/
	/*print os/abi*/
	printf("  OS/ABI:                            ");
	switch (ptr[EI_OSABI])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 1:
			printf("UNIX - Hewlett-Packard HP-UX\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		case 3:
			printf("UNIX - Linux\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		case 7:
			printf("UNIX - AIX\n");
			break;
		case 8:
			printf("UNIX - IRIX\n");
			break;
		case 9:
			printf("UNIX - FreeBSD\n");
			break;
		case 10:
			printf("UNIX - Compaq TRU64 UNIX\n");
			break;
		case 11:
			printf("UNIX - Novell Modesto\n");
			break;
		case 12:
			printf("UNIX - Open BSD\n");
			break;
		case 13:
			printf("UNIX - Open VMS\n");
			break;
		case 14:
			printf("UNIX - Hewlett-Packard Non-Stop Kernel\n");
			break;
		default:
			printf("<unknown: %02d>\n", ptr[EI_OSABI]);
	}
	/*------------------------------------------------------*/
	/*print ABI Version*/
	printf("  ABI Version:                       %d\n", ptr[EI_ABIVERSION]);
	/*------------------------------------------------------*/
	/*print Type*/
	printf("  Type:                              ");
	switch (buffer->e_type)
	{
		case ET_NONE:
			printf("<NONE: No file type>\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_LOOS:
			printf("LOOS (Operating system-specific)\n");
			break;
		case ET_HIOS:
			printf("HIOS (Operating system-specific)\n");
			break;
		case ET_LOPROC:
			printf("LOPROC (Processor-specific)\n");
			break;
		case ET_HIPROC:
			printf("HIPROC (Processor-specific)\n");
			break;
		default:
			printf("\n");
	}
	/*-------------------------------------------------------*/
	/*print Entry*/
	if (buffer->e_entry == 0)
	{
		printf("  Entry point address:              0 (no entry point)\n");
	}
	else
	{
		printf("  Entry point address:               %p\n", (void *)buffer->e_entry);
	}
	return (0);
}
/**
  *clode_ELF - close a file
  *@fd: the identifier of the file
  *Return: nothing
  */
void clode_ELF(int fd)
{
	if (close(fd) == -1)
	{
		fprintf(stderr, "ERROR: can't close the file\n");
	}
}
