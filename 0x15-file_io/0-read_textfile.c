#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print else 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read;
	char buffer[BUFFER_SIZE];
	ssize_t total_bytes_read = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) >
			0 && total_bytes_read < (ssize_t)letters)
	{
		if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
		{
			close(fd);
			return (0);
		}
		total_bytes_read += bytes_read;
		if (total_bytes_read >= (ssize_t)letters)
			break;
	}
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (total_bytes_read);
}
