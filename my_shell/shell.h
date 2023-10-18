#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>

#define BUFF_SIZE 1024

int _printchar(char c);
void read_command(char *command, size_t size);
void execute_command(const char *command);
int _printstring(char *str);
int display_prompt(void);
int _printf(const char *format, ...);
void _putc(char *str);
int _puts(char *c);
void _realloc(void *ptr, size_t old_size, size_t new_size);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char *_strcpy(char *dest, char *src, size_t n);
int _strlen(char *s);
char *string_concat(int n, char *s1, char *s2, ...);
char **split_string(char *str);
int count_word(char *s);
int _strncmp(char *s1, char *s2);


#endif
