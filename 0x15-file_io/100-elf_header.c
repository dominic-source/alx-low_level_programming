#include "main.h"

/**
 * main - printf elf
 * @ac: count of agrument
 * @av: arguments
 * Return: 0
 */
int main(int ac, char *av[])
{
	Elf32_Ehdr *ehd;
	int fd;
	off_t ls;
	char buffer[3000];
	char *errma = "Could not open/seek file\n", *errma4 = "Not an Elf file\n";
	char *errma2 = "Usage: elf_header elf_filename\n";
	ssize_t count;

	if (ac != 2)
	{
		write(STDERR_FILENO, errma2, strlen(errma2));
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	ls = lseek(fd, 0, SEEK_SET);
	if (fd == -1 || ls == -1)
	{
		write(STDERR_FILENO, errma, strlen(errma));
		exit(98);
	}
	count = read(fd, buffer, 1024);
	if (count == -1)
		return (-1);
	ehd = (Elf32_Ehdr *)buffer;
	if (ehd->e_ident[EI_MAG1] == 'E' && ehd->e_ident[EI_MAG2] == 'L')
	{
		if (ehd->e_ident[EI_MAG3] == 'F')
		{
			magic(ehd);
			abi_version(ehd);
			type_entry(ehd);
			close(fd);
		}
	}
	else
	{
		write(STDERR_FILENO, errma4, strlen(errma4));
		exit(98);
	}
	return (0);
}

/**
 * magic - magic number
 * @ehd: elf file
 */
void magic(Elf32_Ehdr *ehd)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%.2x ", ehd->e_ident[i]);
	printf("\n");
	printf("  %-35s", "Class:");

	switch (ehd->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("invalid\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	}

	printf("  %-35s", "Data:");
	switch (ehd->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Unknown data format\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big-endian\n");
		break;
	}
	printf("  %-35s", "Version:");
	printf("%s\n", ehd->e_ident[EI_VERSION] == EV_CURRENT ?
	       "1 (current)" : "Unknown");
}

/**
 * abi_version - abi and version
 * @ehd: elf header
 */
void abi_version(Elf32_Ehdr *ehd)
{
	printf("  %-35s", "OS/ABI:");
	switch (ehd->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
		break;
	case ELFOSABI_ARM:
		printf("ARM architecture");
		break;
	case ELFOSABI_STANDALONE:
		printf("Stand-alone (embedded)");
		break;
	}
	printf("\n");
	printf("  %-35s", "ABI Version:");
	printf("%d\n", ehd->e_ident[EI_ABIVERSION]);
}

/**
 * type_entry - type and entry
 * @ehd: elf header
 */
void type_entry(Elf32_Ehdr *ehd)
{
	printf("  %-35s", "Type:");
	switch (ehd->e_type)
	{
	case ET_NONE:
		printf("unknown type");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	}
	printf("\n");
	printf("  %-35s", "Entry point address:");
	printf("0x%x\n", ehd->e_entry);
}
