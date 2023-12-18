#include "main.h"
#include <elf.h>

#define ERR_NOT_ELF "Error: %s is not an ELF file.\n"
#define USAGE "Usage: elf_header elf_filename\n"

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success and 0 on failure
*/
int main(int ac, char **av)
{
	if (ac != 2)
	{
		fprintf(stderr, USAGE);
		exit(1);
	}
	FILE *file = fopen(av[1], "rb");

	if (!file)
	{
		fprintf(stderr, "Error: Could not open file '%s'.\n", argv[1]);
		exit(1);
	}

	Elf64_Ehdr header;
	size_t bytes_read = fread(&header, sizeof(header), 1, file);

	if (bytes_read != 1 || !IS_ELF64(header))
	{
		fprintf(stderr, ERR_NOT_ELF, argv[1]);
		fclose(file);
		exit(98);
	}
	printf("(Elf64_Ehdr)\n");
	printf(" Magic:   0x%02x %-15s\n", header.e_ident[EI_MAG0],
		elf_ident_name(header.e_ident[EI_MAG0]));
	printf(" Class:   0x%02x %s\n", header.e_class,
		elf_class_name(header.e_class));
	printf(" Data:    0x%02x %s\n", header.e_data, elf_data_name(header.e_data));
	printf(" Version: 0x%02x\n", header.e_ident[EI_VERSION]);
	printf(" OS/ABI:  0x%02x %s\n", header.e_ident[EI_OSABI],
		elf_osabi_name(header.e_ident[EI_OSABI]));
	printf(" ABI Version:  0x%08x\n", header.e_ident[EI_ABIVERSION]);
	printf(" Type:    0x%04x %s\n", header.e_type, elf_type_name(header.e_type));
	printf(" Entry point address:  0x%lx\n", header.e_entry);

	fclose(file);

	return (0);
}
