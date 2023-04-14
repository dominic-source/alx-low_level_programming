#include "main.h"

/**
 * main - print elf information
 * @argc: count of the file
 * @argv: arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	void *addr;
	Elf64_Ehdr *elf_hdr;
	struct stat statbuf;
	int len = 0;
	int fd, cnt;

	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error: Can't open or not ELF file");
		exit(98);
	}
	cnt = fstat(fd, &statbuf);
	if (cnt < 0)
		exit(98);
	addr = mmap(NULL, statbuf.st_size, PROT_READ, MAP_PRIVATE, fd, len);

	elf_hdr = (Elf64_Ehdr *)addr;
	if (elf_hdr == NULL)
	{
		perror("Could not map file");
		exit(98);
	}
	print_elf(elf_hdr);
	munmap(addr, statbuf.st_size);
	close(fd);
	return (0);
}


/**
 * print_elf - print the elf file
 * @elf_hdr: the initialized elf struct
 */
void print_elf(Elf64_Ehdr *elf_hdr)
{
	char *class = "  Class:                             ";
	char *class_n = elf_hdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64";
	char *data = "  Data:                              ";
	char *version = "  Version:                           ";
	char *os_abi = "  OS/ABI:                            ";
	char *abi_vers = "  ABI Version:                       ";
	char *type = "  Type:                              ";
	char *entry = "  Entry point address:               0x";
	char *crnt = elf_hdr->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "";
	char *system, *exec_c, *endian;
	int i;

	switch (elf_hdr->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		endian = "Two's complement, little-endian.";
		break;
	case ELFDATA2MSB:
		endian = "Two's complement, big-endian.";
		break;
	case ELFDATANONE:
		endian = "Unknown data format.";
		break;
	}
	_sys_exe1(elf_hdr, &system);
	_sys_exe2(elf_hdr, &exec_c);
	printf("ELF Header:\n");
	printf("  Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_hdr->e_ident[i]);
	printf("\n");
	printf("%s%s\n", class, class_n);
	printf("%s%s\n", data, endian);
	printf("%s%d%s\n", version, elf_hdr->e_ident[EI_VERSION], crnt);
	printf("%s%s\n", os_abi, system);
	printf("%s%d\n", abi_vers, elf_hdr->e_ident[EI_ABIVERSION]);
	printf("%s%s\n", type, exec_c);
	printf("%s%lx\n", entry, elf_hdr->e_entry);
}

/**
 * _sys_exe1 - check system type and execute type
 * @elf_hdr: pointer to the elf file
 * @system: pointer to the system char
  */
void _sys_exe1(Elf64_Ehdr *elf_hdr, char **system)
{
	switch (elf_hdr->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		*system = "UNIX - System V";
		break;
	case ELFOSABI_HPUX:
		*system = "HP-UX ABI";
		break;
	case ELFOSABI_NETBSD:
		*system = "UNIX - NetBSD";
		break;
	case ELFOSABI_LINUX:
		*system = "UNIX - System V";
		break;
	case ELFOSABI_SOLARIS:
		*system = "UNIX - Solaris";
		break;
	case ELFOSABI_IRIX:
		*system = "IRIX ABI";
		break;
	case ELFOSABI_FREEBSD:
		*system = "FreeBSD ABI";
		break;
	case ELFOSABI_TRU64:
		*system = "TRU64 UNIX ABI";
		break;
	case ELFOSABI_ARM:
		*system = "ARM architecture ABI";
		break;
	case ELFOSABI_STANDALONE:
		*system = "Stand-alone (embedded) ABI";
		break;
	}
}


/**
 * _sys_exe2 - check system type and execute type
 * @elf_hdr: pointer to the elf file
 * @exec_c: pointer execution type
 */
void _sys_exe2(Elf64_Ehdr *elf_hdr, char **exec_c)
{
	switch (elf_hdr->e_type)
	{
	case ET_NONE:
		*exec_c = "An unknown type.";
		break;
	case ET_REL:
		*exec_c = "A relocatable file.";
		break;
	case ET_EXEC:
		*exec_c = "EXEC (Executable file)";
		break;
	case ET_DYN:
		*exec_c = "DYN (Shared object file)";
		break;
	case ET_CORE:
		*exec_c = "A core file";
		break;
	}
}

