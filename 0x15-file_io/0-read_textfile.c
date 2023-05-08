#include "main.h"

/**
 * read_textfile - read text file
 * @filename: name of file
 * @letters: size of letters
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num = read(fd, buf, letters);
	if (num == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, num);
	if (wr == -1)
		return (0);
	if (wr != num)
		return (0);
	close(fd);
	return (num);
}
