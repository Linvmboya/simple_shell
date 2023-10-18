 #include "shell.h"

/**
 * main - starting point
 *
 * Return: 0
 */
int main(void)
{
	pid_t process_id;

	process_id = fork();
	if (process_id == -1)
	{
		perror("Error\n");
		return (1);
	}
	if (process_id == 0)
	{
		printf("Child process ongoing\n");
	}
	else
	{
		wait(NULL);
		sleep(20);
		printf("Parent process\n");
	}
	return (0);
}
