#include "shell.h"
/**
 * read_command - reads the user input command
 * @command: the input
 * @size: the command size
 */
void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			kprint("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			kprint("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
command[strcspn(command, "\n")] = '\0';
}
