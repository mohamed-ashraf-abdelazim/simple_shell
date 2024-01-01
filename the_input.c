#include "sshell.h"

/**
 * read_the_command - reads the commands
 * @the_command: command
 * @the_size: size
*/

void read_the_command(char *the_command, size_t the_size)
{
	if (fgets(the_command, the_size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			the_print_func("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			the_print_func("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	the_command[strcspn(the_command, "\n")] = '\0';
}
