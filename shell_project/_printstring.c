#include "shell.h"

/**
 * _printstring - prints a string
 * @str: string to be printed
 * Return: the printed string
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
 * _printchar - prints characters
 * @c: character to be printed
 * Return: the printed character
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}
