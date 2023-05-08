#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytes_written = write(fd, text_content, length);
	}
	else
		bytes_written = write(fd, "", 0);

	if (bytes_written == -1 || (text_content != NULL && bytes_written != length))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
