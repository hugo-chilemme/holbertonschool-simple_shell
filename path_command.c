#include "main.h"
/**
 * path_command - function that finds the path to execute command
 * @command: command
 *
 * Return: Nothing.
 */

char *path_command(char *command)
{
	int i = 0;
	char *token = NULL;
	char *ptr = NULL;
	struct stat sb;
	char *cache;

	while (environ[i])
	{
		cache = strdup(environ[i]);
		token = strtok(cache, "=");

		if (strcmp(token, "PATH") == 0)
		{
			token = strtok(NULL, "=");
			token = strtok(token, ":");

			while (token)
			{
				ptr = calloc(sizeof(char), strlen(command) + strlen(token) + 2);
				assembly_command(token, command, &ptr);

				if (stat(ptr, &sb) == 0)
				{
					command = ptr;
					free(cache);
					return (command);
				}
				free(ptr);
				token = strtok(NULL, ":");
			}
			free(cache);
			break;
		}
		free(cache);
		i++;
	}
	return (NULL);
}
