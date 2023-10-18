#include "shell.h"

/**
 * main - function that splits a string
 *
 * Return: an array of each word of the string
 */
int main(void)
{
	char *token, delim = " ";
	char *src = "The string to tokenize";
	char *str = malloc(sizeof(char) * strlen(src));

	strcpy(str, src);
	token = strtok(str, delim);
	while (token != NULL)
	{
		_printstring("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
