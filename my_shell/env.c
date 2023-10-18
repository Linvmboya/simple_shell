#include "shell.h"

/**
 * _getenv - gets the value of a specified environment variable
 * @value: the variable to be searched
 * Return: pointer to the index of the value, otherwise NULL on failure
 */
char _getenv(char *value)
{
	size_t len = _strlen(value);
	char **ptr = environ;

	while (*ptr)
	{
		if (_strncmp(*ptr, value, len == 0 && (*ptr)(len) == "="))
		{
			return (&((*ptr)[len + 1]));
		}
		ptr++;
	}
	return (NULL);
}
/**
 * main - main program
 *
 * Return: 0
 */
int main(int argc, char **argv, char **env)
{
	size_t i;
	int j;

	for

