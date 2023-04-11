#ifndef MAIN_H
#define MAIN_H
#define BUFSIZ 1024
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/resource.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
void _write_err(char *name, char *message);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _close(ssize_t fd_1, ssize_t fd_2);

#endif
