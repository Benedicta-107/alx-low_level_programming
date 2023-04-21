#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - To create a file.
 * @filename: A pointer to the filename created.
 * @text_content: A pointer to the string to write to the file.
 *
 * Return: 1 (success) -1 (failed).
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
