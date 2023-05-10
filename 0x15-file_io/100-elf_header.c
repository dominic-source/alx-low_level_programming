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
	char buffer[3000];
	char *errma = "Could not open/seek file\n";
	char *errma4 = "Error: Not an ELF file - wrong magic bytes at the start\n";
	char *errma2 = "Usage: elf_header elf_filename\n";
	ssize_t count;
	int fd;
	off_t ls;

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
	ehd = (Elf32_Ehdr *)buffer;
	if (ehd->e_ident[EI_MAG1] == 'E' && count != -1)
	{
		if (ehd->e_ident[EI_MAG2] == 'L' && ehd->e_ident[EI_MAG3] == 'F')
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
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %.2x", ehd->e_ident[i]);
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
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	}
	printf("  %-35s", "Version:");
	printf("%d", ehd->e_ident[EI_VERSION]);
	printf("%s\n", ehd->e_ident[EI_VERSION] == EV_CURRENT ?
	       " (current)" : "");
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
	case ELFOSABI_SYSV || ELFOSABI_NONE:
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
		printf("UNIX - System V");
		break;
	case ELFOSABI_STANDALONE:
		printf("UNIX - System V");
		break;
	default:
		printf("<unknown: 53>");
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
	default:
		printf("EXEC (Executable file)");
	}
	printf("\n");
	printf("  %-35s", "Entry point address:");
	printf("0x%lx\n", ehd->e_ident[EI_DATA] == ELFDATA2LSB ?
	       ehd->e_entry : (ehd->e_ident[EI_CLASS] == 1 ?
			       e_entry1(ehd->e_entry) : e_entry2(ehd->e_entry)));
}

/**
 * e_entry1 - convert little endian to big endian or otherwise
 * @entry1: address
 * Return: address
 */
uint32_t e_entry1(uint32_t entry1)
{
	entry1 = ((entry1 & 0xff000000) >> 24 |
		  (entry1 & 0x00ff0000) >> 8 |
		  (entry1 & 0x0000ff00) << 8 |
		  (entry1 & 0x000000ff) << 24);
	return (entry1);

}

/**
 * e_entry2 - convert little endian to big endian or otherwise
 * @entry2: address
 * Return: address
 */
uint64_t e_entry2(uint64_t entry2)
{
	entry2 = ((entry2 & 0xff00000000000000) >> 56 |
		  (entry2 & 0x00ff000000000000) >> 40 |
		  (entry2 & 0x0000ff0000000000) >> 24 |
		  (entry2 & 0x000000ff00000000) >> 8 |
		  (entry2 & 0x00000000ff000000) << 8 |
		  (entry2 & 0x0000000000ff0000) << 24 |
		  (entry2 & 0x000000000000ff00) << 40 |
		  (entry2 & 0x00000000000000ff) << 56);
	return (entry2);

}
