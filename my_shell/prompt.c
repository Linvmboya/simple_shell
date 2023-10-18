#include "shell.h"

/**
 * display_prompt - displays prompt
 *
 *Return: 0
 */
int display_prompt(void)
{
	char *prompt = "$ ";
	size_t buffsize = 0;
	char *buffer = NULL;
	ssize_t n_chars;

	while (1)
	{
		if (isatty(0))
			_printstring(prompt);
		n_chars = getline(&buffer, &buffsize, stdin);
		if (n_chars == -1)
		{
			_printstring(buffer);
			exit(0);
		}
		else
			wait(NULL);
	}
	return (0);
}
/**
 * main - execute program
 *
 * Return: 0
 */
int main(void)
{
	while (1)
	{
		display_prompt();
	}
	return (0);
}
