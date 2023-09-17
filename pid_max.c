#include "shell.h"

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	int num = 20;

	my_pid = getpid();
	printf("%d\n", num);
	printf("The process id is: %u\n", my_pid);
	return (0);
}
