#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void func_print(const char *string);
void display_prompt(void);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif
