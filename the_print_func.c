#include "sshell.h"

/**
 * the_print_func - print function
 * @the_message: the message to be print
*/

void the_print_func(const char *the_message)
{
	write(STDOUT_FILENO, the_message, strlen(the_message));
}
