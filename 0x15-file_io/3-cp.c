#include "main.h"

/**
 * main - function to copy files
 * @argc: count of the arguments
 * @argv: the arguments
 * Return: 1 or -1
 */
int main(int argc, char *argv[])
{
	char *error = "Usage: cp file_from file_to\n";
	char *error_2 = "Error: Can't read from file ";
	char *error_3 = "Error: Can't write to file ";
	int fd_1, fd_2, fd_3, cnt, cnt_2;
	char buffer[M_BUFSIZ];

	if (argc != 3)
	{
		write(STDERR_FILENO, error, strlen(error));
		exit(97);
	}
	fd_1 = open(argv[1], O_RDWR);
	if (fd_1 == -1 || fd_1 == ENOENT || fd_1 == EACCES)
	{
		_write_err(argv[1], error_2);
		exit(98);
	}
	fd_3 = open(argv[2], O_TRUNC | O_RDWR);
	close(fd_3);
	fd_2 = open(argv[2], O_CREAT | O_RDWR, 0664);
	if (fd_2 == -1 || fd_2 == EACCES || fd_2 == EBADF || fd_2 == EDQUOT)
	{
		_write_err(argv[2], error_3);
		exit(99);
	}
	/* copy's the file to another file */
	cnt = read(fd_1, buffer, M_BUFSIZ);
	if (cnt == -1 || fd_1 == EBADF)
		exit(98);
	cnt_2 = write(fd_2, buffer, cnt);
	if (cnt_2 == -1)
		exit(99);
	while (cnt != 0)
	{
		cnt = read(fd_1, buffer, M_BUFSIZ);
		write(fd_2, buffer, cnt);
	}
	_close(fd_1, fd_2);
	chmod(argv[2], 0664);
	return (0);
}


/**
 * _close - close files
 * @fd_1: file descriptor to close
 * @fd_2: file descriptor to close
 * Return: 0 or -1
 */
int _close(ssize_t fd_1, ssize_t fd_2)
{
	char *error_4 = "Error: Can't close fd ";
	int cl_1, cl_2;

	cl_1 = close(fd_1);
	if (cl_1 == -1)
	{
		_write_err((char *)fd_1, error_4);
		exit(100);
	}

	cl_2 = close(fd_2);
	if (cl_2 == -1)
	{
		_write_err((char *)fd_2, error_4);
		exit(100);
	}



	return (cl_2);
}


/**
 * _write_err - write error messages
 * @name: name of the error
 * @message: error message
 */
void _write_err(char *name, char *message)
{
	char *nwl = "\n";

	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, name, strlen(name));
	write(STDERR_FILENO, nwl, 1);
}
