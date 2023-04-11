#include "main.h"

/**
 * read_textfile - read text file
 * @filename: name of of file
 * @letters: the number of letters to read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t cnt;
	ssize_t cnt_2;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == EBADF || fd == -1)
		return (0);

	cnt = read(fd, buffer, letters);
	if (cnt == -1)
		return (0);

	cnt_2 = write(1, buffer, cnt);
	if (cnt_2 == -1 || cnt_2 == RLIMIT_FSIZE)
		return (0);

	free(buffer);
	close(fd);
	return (cnt);
}
