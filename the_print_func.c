#include "sshell.h"

/**
 * the_print_func - print function
 * @message: the maessage to be print
*/

void the_print_func(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
