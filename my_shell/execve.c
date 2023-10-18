#include "shell.h"

/**
 * read_command - reads user input
 * @command: an input
 * @size: length of the input
 *
 */
void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			_printstring("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			_printstring("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
/**
 * execute_command - executes commands
 * @command: the arguments to be executed
 *
 */
void execute_command(const char *command)
{
	pid_t process_id = fork();
	char *args[128];
	int arg_count = 0;
	char *token;

	if (process_id == -1)
	{
		_printstring("Error\n");
		exit(EXIT_FAILURE);
	}
	else if (process_id == 0)
	{
		token = strtok((char *)command, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execve(args[0], args, NULL);
		_printstring("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
/**
 * main - execute program
 *
 * Return: 0
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
