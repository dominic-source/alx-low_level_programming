#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content in file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd2;

	if (filename == NULL)
		return (-1);

	fd2 = open(filename, O_RDWR);
	if (fd2 == -1)
	{
		close (fd2);
		/* if the file does not exist */
		fd = open(filename, O_RDWR | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}
	else
	{
		close (fd2);
		/* if the file already exist */
		fd = open(filename, O_RDWR | O_TRUNC, 0);
		if (fd == -1)
			return (-1);
	}
	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
	}
	close (fd);
	if (fd2 == -1)
		chmod(filename, 0600);
	return (1);
}
