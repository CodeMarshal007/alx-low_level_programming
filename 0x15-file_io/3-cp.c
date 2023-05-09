#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @ac: number of command-line arguments
 * @av: pointer to array of command-line arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, bytes_read, bytes_written;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd1);
		if (close(fd2) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
		exit(99);
	}
	while ((bytes_read = read(fd1, buffer, 1024)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(fd1);
		close(fd2);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return 0;
}
