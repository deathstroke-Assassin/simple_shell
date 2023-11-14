#include "shell.h"
/**
 * main - the main shell function
 * Return: always 0
 */
int main(void)
{
char command[120];
while (true)
{
	display_prompt();
	read_command(command, sizeof(command));
	execute_command(command);
}
return (0);
}
