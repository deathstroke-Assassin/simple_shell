#ifndef M_SHELL_H
#define M_SHELL_H

/*
 *The Shell Header
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
 * libraries
 */

void display_prompt(void);
void kprint(const char *message);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif /* M_SHELL_H */
