#include "sshell.h"
/**
 * main - simple shell
 * Return: 0 success
*/

int main(void)
{
	char the_command[120];

	while (true)
	{
		display_the_prompt();
		read_the_command(the_command, sizeof(the_command));
		execute_the_command(the_command);
	}
	return (0);
}
