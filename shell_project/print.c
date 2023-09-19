#include "shell.h"

/**
 * func_print - creates a function that prints
 * @string: the characters to be printed
 *
 */
void func_print(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
