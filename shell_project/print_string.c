#include "shell.h"

/**
 * main - function that splits string and returns an array of each word
 *
 * Return: 0
 */
int main(void)
{
	char *token;
	char *delim = " ";
	char *src = "My string";
	char *str = malloc(sizeof(char) * strlen(src));

	strcpy(str, src);
	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
