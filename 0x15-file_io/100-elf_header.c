#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void handle_elf(char *e);
void verify_elf(char *e);
void magic_printer(char *e);
void class_printer(char *e);
void address_printer(char *e);
void sys_version_printer(char *e);
void data_printer(char *e);
void version_printer(char *e);
void os_abi_printer(char *e);
void type_printer(char *e);



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
	char e[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header elf_file\n");
	    exit(98);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	count_read = read(fd, e, 27);
	if (count_read == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Can't read file: %s\n", argv[1]);
		exit(98);
	}
	handle_elf(e);

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Failed to close fd\n");
		exit(98);
	}
	return (0);
}

/**
* handle_elf - supports printing elf file header information
*
* @e: an array that specifiies how to interpret elf
*/
void handle_elf(char *e)
{
	verify_elf(e);
	sys_version_printer(e);
}
/**
* verify_elf - verifies if the file is in elf format
*
* @e:  an array that speciifies how to interpret the ELF file
*/
void verify_elf(char *e)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e[index] != 127 &&
		    e[index] != 'E' &&
		    e[index] != 'L' &&
		    e[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
* sys_version_printer - prints system version information for an ELF file
* @e:  an array that speciifies how to interpret the file
*/
void sys_version_printer(char *e)
{
	char sys = e[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	magic_printer(e);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");
	data_printer(e);
	version_printer(e);
	os_abi_printer(e);
	type_printer(e);
	address_printer(e);

}
/**
* magic_printer - prints the magic number
*
* @e: an array that speciifies how to interpret the ELF file
*/
void magic_printer(char *e)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", e[bytes]);

	printf("\n");

}
/**
* class_printer - prints Class information of an ELF file
*
* @e: an array that speciifies how to interpret the file
*/
void class_printer(char *e)
{
	printf("  Class:                             ");
	if (e[EI_CLASS] == ELFCLASSNONE)
		printf("Class invalid\n");
	else if (e[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e[EI_CLASS]);
}
/**
* data_printer - prints Data information for an ELF file
*
* @e:  an array that speciifies how to interpret the file
*/
void data_printer(char *e)
{
	char data = e[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}
/**
 * version_printer - prints version
 * @e: magic.
 * Return: no return.
 */
void version_printer(char *e)
{
	int version = e[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
* os_abi_printer - prints OS/ABI information on an ELF file
*
* @e:  an array that speciifies how to interpret the file
*/
void os_abi_printer(char *e)
{
	char osabi = e[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("\n");

	printf("  ABI Version:                       %d\n", e[8]);
}
/**
* type_printer - prints type information for an ELF file.
*
* @e: identifies the object file type
*
*/
void type_printer(char *e)
{
	char type = e[16];

	if (e[5] == 1)
		type = e[16];
	else
		type = e[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
/**
 * address_printer - prints address
 * @e: magic.
 * Return: no return.
 */
void address_printer(char *e)
{
	int i;
	int begin;
	char sys;

	printf("  Entry point address:               0x");

	sys = e[4] + '0';
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (i = begin; i >= 22; i--)
		{
			if (e[i] > 0)
				printf("%x", e[i]);
			else if (e[i] < 0)
				printf("%x", 256 + e[i]);
		}
		if (e[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		begin = 26;
		for (i = begin; i > 23; i--)
		{
			if (e[i] >= 0)
				printf("%02x", e[i]);

			else if (e[i] < 0)
				printf("%02x", 256 + e[i]);

		}
	}
	printf("\n");
}
