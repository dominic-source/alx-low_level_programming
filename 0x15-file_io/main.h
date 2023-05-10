#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <elf.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int close_all(int fd, int fd2, int fd3);
void magic(Elf32_Ehdr *ehd);
void abi_version(Elf32_Ehdr *ehd);
void type_entry(Elf32_Ehdr *ehd);
uint32_t e_entry1(uint32_t entry1);
uint64_t e_entry2(uint64_t entry2);
#endif
