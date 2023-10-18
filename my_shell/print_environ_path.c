#include "shell.h"

/**
 * main - prints the path
 * @argc: number of arguments
 * @argv: pointer to the address of the arguments
 * @env: the environment variable specified
 *
 * Return: 0
 */
int main(int argc, char **argv, char **env)
{
	int i;
	char *path, **paths;
	size_t j;

	for (j = 0; !env[j]; j++)
		printf("%d\n", env[j]);
	path = _getenv("PATH");
	_printstring("%s\n", path);
	paths = split_string(path, ":", &j);
	for (i = 0; paths[i]; i++)
		_printstring("%d - %s\n", i, paths[i]);
	free(paths, j);
	return (0);
}
