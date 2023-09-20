#include "shell.h"

/**
 * main - prints all arguments, without using ac
 * @ac: the number of items in av
 * @av: is a NULL terminated array of strings
 * Return: 0
 */
int main(int ac __attribute__((unused)), char **av)
{
	int x;

	for (x = 0; av[x] != NULL; x++)
		printf("%d \n", **av);
	return (0);
}
