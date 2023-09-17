#include "shell.h"

/**
 * func_print - creates a print function
 * @string: the characters to be printed
 * Return: 0 Always
 */
void func_print(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
	return (0);
}
