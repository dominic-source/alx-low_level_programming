#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: content of the file
 * Return: 1 0r -1
 */
int create_file(const char *filename, char *text_content)
{

	ssize_t cnt;
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
	cnt = write(fd, text_content, strlen(text_content));

	if (cnt == -1)
		return (-1);
	}
	close(fd);

	return (1);
}
