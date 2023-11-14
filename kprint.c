#include "shell.h"
/**
 * kprint - my print function just for the shell
 * @message: the printed output
 */
void kprint(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}

