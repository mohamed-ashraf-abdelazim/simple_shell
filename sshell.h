#ifndef SSHELL_H
#define SSHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


void display_the_prompt(void);
void the_print_func(const char *message);
void read_the_command(char *the_command, size_t the_size);
void execute_the_command(const char *the_command);




#endif
