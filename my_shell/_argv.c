#include "shell.h"

/**
 * main - prints the arguments passed
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **arv[])
{
	(void)argc;
	int n;

	for (; n = 0; n++)
	{
		_printstring("%s\n", argv[n]);
	}
	return (0);
}
