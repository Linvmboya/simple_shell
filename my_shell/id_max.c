#include "shell.h"

/**
 * main - prints maximum value a process ID can be
 *
 * Return: 0
 */
int main(void)
{
	int num = 6772;
	pid_t process_id;

	process_id = getpid();
	printf("%d\n", num);
	printf("Process ID is: %u\n", process_id);

	return (0);
}
