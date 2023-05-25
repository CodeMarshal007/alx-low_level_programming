#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_magic -prints the ELF identification bytes from an ELF file header
 * @e_ident: pointer to an array of ELF identification bytes
 *
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}
/**
 * print_class - prints the ELF class of an ELF file header
 * @e_ident: pointer to an array of ELF identification bytes
 *
 * Return: void
 */
void print_class(unsigned char e_ident[EI_NIDENT])
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}
/**
 * print_data - prints the data encoding scheme of an ELF file header
 * @e_ident: pointer to an array of ELF identification bytes
 *
 * Return: void
 */
void print_data(unsigned char e_ident[EI_NIDENT])
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_DATA]);
    }
}
/**
 * print_version - prints the ELF version of an ELF file header
 * @e_ident: pointer to an array of ELF identification bytes
 *
 * Return: void
 */
void print_version(unsigned char e_ident[EI_NIDENT])
{
    printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);
}
/**
 * print_osabi - prints the operating system and ABI to which an ELF object is targeted
 * @e_ident: pointer to an array of ELF identification bytes
 *
 * Return: void
 */
void print_osabi(unsigned char e_ident[EI_NIDENT])
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - GNU/Linux\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}
/**
 * print_abiversion - prints the ABI version of an ELF file header
 * @e_ident: pointer to an array of ELF identification bytes
 *
 * Return: void
 */
void print_abiversion(unsigned char e_ident[EI_NIDENT])
{
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * print_type - prints the object file type of an ELF file header
 * @e_type: object file type
 *
 * Return: void
 */
void print_type(Elf64_Half e_type)
{
    printf("  Type:                              ");
    switch (e_type)
    {
    case ET_NONE:
        printf("NONE (No file type)\n");
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
    default:
        printf("<unknown: %x>\n", e_type);
    }
}
/**
 * print_entry - prints the virtual address to which an ELF file's first byte is mapped
 * @e_entry: virtual address
 *
 * Return: void
 */
void print_entry(Elf64_Addr e_entry)
{
    printf("  Entry point address:               %#lx\n", (unsigned long)e_entry);
}
/**
 * print_header - prints the entire ELF file header
 * @header: pointer to the ELF file header
 *
 * Return: void
 */
void print_header(Elf64_Ehdr *header)
{
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_osabi(header->e_ident);
    print_abiversion(header->e_ident);
    print_type(header->e_type);
    print_entry(header->e_entry);
}
/**
 * main - displays the information contained in the ELF header at the start of an ELF file
 * @argc: number of command-line arguments
 * @argv: array of pointers to the command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <elf_file>\n", argv[0]);
        return 1;
    }

 
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

     Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        perror("read");
        close(fd);
        return 1;
    }

     print_header(&header);

     close(fd);

    return 0;
}
