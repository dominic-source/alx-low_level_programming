#ifndef MAIN_H
#define MAIN_H
#define M_BUFSIZ 1024
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/resource.h>
#include <elf.h>
#include <sys/mman.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
void print_elf(Elf64_Ehdr *elhdr64);
void _write_err(char *name, char *message);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void _sys_exe2(Elf64_Ehdr *elf_hdr, char **exec_c);
void _sys_exe1(Elf64_Ehdr *elf_hdr, char **system);
int append_text_to_file(const char *filename, char *text_content);
int _close(ssize_t fd_1, ssize_t fd_2);
#endif
