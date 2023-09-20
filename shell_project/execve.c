#include "shell.h"

/**
 * execute_command - function that executes a command
 * @command: the command to be executed
 *
 */
void execute_command(const char *command)
{
	pid_t child_pid;
	char *args[] = {NULL, NULL};
	char *token, *delim = " ";
	char *src = "My string";
	char *str = malloc(sizeof(char) * strlen(src));

	child_pid = fork();

	if (child_pid == -1)
	{
		_printstring("Error \n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		strcpy(str, src);
		token = strtok(str, delim);
		while (token != NULL)
		{
			command = token;
			token = strtok(NULL, " ");
		}
		command = NULL;
		execve(command, args, NULL);
		_printstring("This command does not exist.\n");
		exit(EXIT_FAILURE);
	}
	else
		wait(NULL);
}
