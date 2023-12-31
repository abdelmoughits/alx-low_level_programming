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
	unsigned long int entry;
	unsigned int etype;

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
	if (ptr[EI_CLASS] == ELFCLASSNONE)
	{
		printf("Invalid class\n");
	}
	if (ptr[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	if (ptr[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	/*-----------------------------------------------------*/
	/*print data*/
	printf("  Data:                              2's complement, ");
	if (ptr[EI_DATA] == ELFDATANONE)
	{
		printf("Invalid data encoding\n");
	}
	if (ptr[EI_DATA] == ELFDATA2LSB)
	{
		printf("little endian\n");
	}
	if (ptr[EI_DATA] == ELFDATA2MSB)
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
		printf("1\n");
	}
	/*-----------------------------------------------------*/
	/*print os/abi*/
	printf("  OS/ABI:                            ");
	switch (ptr[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - Hewlett-Packard HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_MODESTO:
			printf("UNIX - Novell Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - Open BSD\n");
			break;
		case 13:
			printf("UNIX - Open VMS\n");
			break;
		case 14:
			printf("UNIX - Hewlett-Packard Non-Stop Kernel\n");
			break;
		default:
			printf("<unknown: %x>\n", ptr[EI_OSABI]);
	}
	/*------------------------------------------------------*/
	/*print ABI Version*/
	printf("  ABI Version:                       %d\n", ptr[EI_ABIVERSION]);
	/*------------------------------------------------------*/
	/*print Type*/
	printf("  Type:                              ");
	etype = buffer->e_type;
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		etype >>= 8;
	}
	switch (etype)
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
	entry = buffer->e_entry;
	printf("  Entry point address:               ");
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ptr[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)entry);
	}
	else
	{
		printf("%#lx\n", (unsigned long int)entry);
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
