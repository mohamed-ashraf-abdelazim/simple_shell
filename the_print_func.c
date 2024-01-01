#include "sshell.h"

/**
 * the_print_func - print function
 * @message: the maessage to be print
*/

void the_print_func(const char *the_message)
{
	write(STDOUT_FILENO, the_message, strlen(the_message));
}
