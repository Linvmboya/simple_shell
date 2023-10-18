#include "shell.h"
/**
 * _printchar - function that prints characters
 * @c: the characters to be printed
 *
 * Return: printed characters
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printstring - function that prints a string of characters
 * @str: the string to be printed
 *
 * Return: string
 */
int _printstring(char *str)
{
	int x = 0, count = 0;

	while (str[x])
	{
		count += _printchar(str[x++]);
	}
	return (count);
}
/**
 * _puts - print string
 * @c: the string to be printed
 *
 * Return: the number of bytes
 */
int _puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			_printchar(c[count]);
		}
	}
	return (0);
}
