#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int _printchar(char c);
int _printstring(char *str);
int main(int ac __attribute__((unused)), char **av);
int display_prompt(void);
int pid_max(void);
int exec_command(void);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif
