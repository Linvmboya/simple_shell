#include "shell.h"

/**
 * main - PPID
 *
 * Return: 0 Always
 */
int main(void)
{
	pid_t parent_id;

	parent_id = getppid();
	printf("%u\n", parent_id);
	return (0);
}
