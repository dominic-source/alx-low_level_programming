#include "main.h"
#define NOWRITE\
	do {\
		dprintf(er, "Error: Can't write to %s\n", av2);\
		exit(99);\
	} \
	while (0)

/**
 * main - copy's content to another a file
 * @ac: argument count
 * @av: arguments
 * Return: integer
 */
int main(int ac, char *av[])
{
	char *av1 = av[1], *av2 = av[2];
	char buffer[1024];
	int fd, fd2, fd3, er = STDERR_FILENO;
	ssize_t count, wr;

	if (ac != 3)
	{
		dprintf(er, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd2 = open(av1, O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(er, "Error: Can't read from file %s\n", av1);
		exit(98);
	}
	fd3 = open(av2, O_RDONLY);
	fd = open(av2, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd == -1)
		NOWRITE;
	count = read(fd2, buffer, sizeof(buffer));
	if (count == -1)
	{
		dprintf(er, "Error: Can't read from file %s\n", av1);
		exit(98);
	}
	while (count != 0)
	{
		wr = write(fd, buffer, count);
		if (wr == -1)
			NOWRITE;
		count = read(fd2, buffer, sizeof(buffer));
	}
	if (fd3 == -1)
		chmod(av2, 0664);
	if (close_all(fd, fd2, fd3) == -1)
		exit(100);
	return (0);
}

/**
 * close_all - close all the two files
 * @fd: file descriptor 1
 * @fd2: file descriptor 2
 * @fd3: file descriptor 3
 * Return: -1 or 0
 */
int close_all(int fd, int fd2, int fd3)
{
	int j, k, l, er = STDERR_FILENO;

	if (fd3 != -1)
	{
		l = close(fd3);
		if (l == -1)
		{
			dprintf(er, "Error: Can't close fd %d", fd3);
			return (-1);
		}
	}

	k = close(fd2);
	if (k == -1)
	{
		dprintf(er, "Error: Can't close fd %d", fd2);
		return (-1);
	}

	j = close(fd);
	if (j == -1)
	{
		dprintf(er, "Error: Can't close fd %d", fd);
		return (-1);
	}


	return (0);
}
