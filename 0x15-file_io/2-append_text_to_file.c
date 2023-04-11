#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{

	ssize_t fd, cnt;

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1 || fd == EACCES)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		cnt = write(fd, text_content, strlen(text_content));
		if (cnt == -1)
			return (-1);
	}
	return (1);
}
