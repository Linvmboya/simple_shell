#include "shell.h"
#include <sys/wait.h>

/**
 * main - executes the command ls -l /tmp in a child process
 *
 * Return: 0
 */
int main(void)
{
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", NULL};
	int x;

	child_pid = fork();
	if (child_pid == -1)
		exit(EXIT_FAILURE);
	if (child_pid == 0)
	{
		x = execve(argv[0], argv, NULL);
		if (x == -1)
			perror("Error");
	}
	else
	{
		wait(NULL);
		func_print("Parent process");
	}
}