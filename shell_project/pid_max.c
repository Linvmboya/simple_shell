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
	func_print("%d\n", num);
	func_print("The process id is: %u\n", my_pid);
	return (0);
}
