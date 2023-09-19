#include "shell.h"

/**
 * main - prints all arguments, without using ac
 * @ac: the number of items in av
 * @av: is a NULL terminated array of strings
 * Return: 0
 */
int main(int ac, char **av)
{
	func_print("%s\n", **av);
	return (0);
}
