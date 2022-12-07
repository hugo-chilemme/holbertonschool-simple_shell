#include "main.h"
/**
 * requirement_command - check commands before executing them
 * @commands: commands
 * @filename: filename
 *
 * Return: Nothing.
 */
int requirement_command(char **commands, char *filename)
{
	char *commandWithPath = NULL;
	int codestatus = 0;

	if (strcmp(commands[0], "env") == 0)
	{
		env_command();
		return (1);
	}

	if (!is_path(commands[0]))
	{
		commandWithPath = path_command(commands[0]);
		if (!commandWithPath)
		{
			dprintf(STDERR_FILENO, "%s: 1: %s: not found\n", filename, commands[0]);
			return (0);
		}
		commands[0] = commandWithPath;
	}

	if (access(commands[0], F_OK) == -1)
	{
		dprintf(STDERR_FILENO, "%s: 1: %s: not found\n", filename, commands[0]);
		return (0);
	}

	codestatus = execute_command(&*commands, filename);

	if (commandWithPath)
		free(commandWithPath);

	return (codestatus);
}
