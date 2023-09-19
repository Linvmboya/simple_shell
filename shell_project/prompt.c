#include "shell.h"
#include <sys/wait.h>
#include <stdlib.h>

/**
 * display_prompt - function that displays the prompt
 *
 */
void display_prompt(void)
{
	printf("$");
}

/**
 * read_command - function that reads the commands
 * @command: a string of commands
 * @size: length of the string
 *
 */
void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Input Error. \n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

/**
 * main - prints the prompt $ which is the entry point
 *
 * Return: $ (the prompt)
 */
int main(void)
{
	char command[128];

	while (1)
	{
		display_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}

/**
 * execute_command - executes the prompt function
 * @command: string of command
 *
 */
void execute_command(const char *command)
{
	pid_t process_id = fork();
	char *argv[128];

	if (process_id == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (process_id == 0)
	{
		execve(command, argv, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
