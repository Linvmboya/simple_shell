#include "shell.h"

/**
 * _printchar - prints characters
 * @c: character to be printed
 * Return: printed characters
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printstring - prints strings
 * @str: the string to be printed
 * Return: strings
 */
int _printstring(char *str)
{
	int x, count = 0;

	while (str[x])
	{
		count += _printchar(str[x++]);
	}
	return (count);
}
/**
 * main - starting point
 *
 * Return: 0
 */
int main(void)
{
	char command[128];

	while (1)
	{
		display_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
