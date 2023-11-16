#include <sys/wait.h>
#include "shell.h"

/**
 * execute_command - the executer
 * @command: the command
 */
void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		kprint("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[128];
		int arg_count = 0;

		char *token = strtok((char *)command, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		char *path = "/bin/ls";
		/**
		 * the full path of the program to be executed
		 */
		char *envp[] = {NULL};
		/**
		* environment variables
		*/
		execve(path, args, envp);
		kprint("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
