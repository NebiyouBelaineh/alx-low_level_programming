#include "main.h"
/**
* main - displays the information contained in the ELF header at the start
* of an ELF file
*
* @argc: number of arguments passed to main
* @argv: array of strings that contains each argument passed t main
* Return: 0 upon success
*/
int main(int argc, char *argv[])
{
	int fd, count_read, close_status;

	Elf64_Ehdr *e_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header elf_file\n");
	    exit(98);
	}
	e_header = malloc(sizeof(Elf64_Ehdr));

	if (e_header != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(98);
	}
	fd = open(argv[11], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	count_read = read(fd, e_header, sizeof(Elf64_Ehdr));
	if (count_read == -1)
	{
		dprintf(STDERR_FILENO, "Can't read file: %s\n", argv[1]);
		exit(98);
	}
	handle_elf(e_header);
	free(e_header);

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Fauled to close fd\n");
		exit(98);
	}
	return (0);
}

/**
* handle_elf - supports printing elf file header information
*
* @e_header: struct datatype containing various ELF file information
*/
void handle_elf(Elf64_Ehdr *e_header)
{
	verify_elf(e_header->e_ident);
	magic_printer(e_header->e_ident);
	class_printer(e_header->e_ident);
	data_printer(e_header->e_ident);
	version_printer(e_header->e_ident);
	os_abi_printer(e_header->e_ident);
	printf("   ABI Version:                       ");
	printf("%i\n", e_header->e_ident[EI_ABIVERSION]);
	type_printer(e_header->e_type, e_header->e_ident);
	entry_printer(e_header->e_entry, e_header->e_ident);

}
/**
* verify_elf - verifies if the file is in elf format
*
* @e_ident:  an array that speciifies how to interpret the ELF file
*/
void verify_elf(unsigned char *e_ident)
{
	if (e_ident[0] == 0x7f && e_ident[1] == 'E' &&
	e_ident[2] == 'L' && e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: File is not an ELF File\n");
		exit(98);
	}
}
/**
* magic_printer - prints the magic number
*
* @e_ident: an array that speciifies how to interpret the ELF file
*/
void magic_printer(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");
	index = 0;
	while (index < EI_NIDENT - 1)
	{
		printf("%02x ", e_ident[index]);
		index++;
	}
	printf("%02x\n", e_ident[index]);
}
/**
* class_printer - prints Class information of an ELF file
*
* @e_ident: an array that speciifies how to interpret the file
*/
void class_printer(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("Class invalid\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
/**
* data_printer - prints Data information for an ELF file
*
* @e_ident:  an array that speciifies how to interpret the file
*/
void data_printer(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown format\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}
/**
* version_printer - prints version information for an ELF file
* @e_ident:  an array that speciifies how to interpret the file
*/
void version_printer(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}
/**
* os_abi_printer - prints OS/ABI information on an ELF file
*
* @e_ident:  an array that speciifies how to interpret the file
*/
void os_abi_printer(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
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
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
* type_printer - prints type information for an ELF file.
*
* @e_type: identifies the object file type
* @ident: an array that speciifies how to interpret the file
*
*/
void type_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
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
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
* entry_printer - prints entry point address for an ELF file
*@e_entry:e_entry address
*@e_ident:pointer to char string
*/
void entry_printer(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = lit_to_big_endian(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);

}
/**
*lit_to_big_endian - converts hexes in little endian to big endian
*@x:int to convert
*Return:value in unsigned int
*/
unsigned int lit_to_big_endian(unsigned int x)
{
	return (((x >> 24) & 0x000000ff) |
		((x >> 8) & 0x0000ff00)  |
		((x << 8) & 0x00ff0000)  |
		((x << 24) & 0xff000000));
}
