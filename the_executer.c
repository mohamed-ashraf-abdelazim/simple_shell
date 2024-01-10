#include "sshell.h"

/**
 * execute_the_command - executes the command
 * @the_command: the command
*/

void execute_the_command(const char *the_command)
{
	pid_t chld_pid = fork();

	if (chld_pid == -1)
	{
		the_print_func("Error forking process.\n");
		exit(EXIT_FAILURE);
	}

	else if (chld_pid == 0)
	{
		char *the_args[128];
		int args_count = 0;
		char *the_token = strtok((char *)the_command, " ");

		while (the_token != NULL)
		{
			the_args[args_count++] = the_token;
			the_token = strtok(NULL, " ");
		}

		the_args[args_count] = NULL;
		execvp(the_args[0], the_args);
		the_print_func("Error executing command.\n");
		exit(EXIT_FAILURE);
	}

	else
	{
		wait(NULL);
	}
}
