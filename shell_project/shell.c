#include "shell.h"

/**
 * _printchar - function that prints characters
 * @c: character to be printed
 * Return: printed characters
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printstring - function that prints a string
 * @str: pointer to the string to be printed
 * Return: the string that has been printed
 */
int _printstring(char *str)
{
	int count = 0, x = 0;

	while (str[x])
	{
		count += _printchar(str[x++]);
	}
	return (count);
}

/**
 * main - function that prints the prompt
 *
 *Return: 0 Always
 */
int main(void)
{
	char *prompt = "Prompt$";
	char *buffer = NULL;
	size_t buffsize = 0;
	ssize_t n_chars;

	while (1)
	{
		_printstring(prompt);
		n_chars = getline(&buffer, &buffsize, stdin);
		if (n_chars == -1)
		{
			_printstring("Exiting the shell....");
			exit(0);
		}
		_printstring(buffer);

	}
	free(buffer);
	return (0)
}
