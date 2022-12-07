#include "main.h"
/**
 * is_path - function that print the path
 * @path_command: command from path
 *
 * Return: Nothing.
 */
int is_path(char *path_command)
{
	int have_slash = 0;
	int index = 0;

	if (!path_command)
		return (0);
	while (path_command[index])
	{
		if (path_command[index] == '/')
			have_slash = 1;
		index += 1;
	}

	return (have_slash);
}
