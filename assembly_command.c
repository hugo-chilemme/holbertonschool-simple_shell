#include "main.h"
/**
 * assembly_command - function that assembly command.
 * @directory: directory
 * @command: command
 * @output: output
 *
 * Return: Nothing.
 */
void assembly_command(char *directory, char *command, char **output)
{
	strcat(*output, directory);
	strcat(*output, "/");
	strcat(*output, command);
	strcat(*output, "\0");
}
