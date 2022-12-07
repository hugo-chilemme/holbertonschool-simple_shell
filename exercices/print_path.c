#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_path - function that prints each directory contained
 *				in the PATH
 * @path_dir: the PATH
 * Return: 0
 */
char *print_path(char *path_dir)
{
	char *dir;
	char *copy;

	copy = malloc(strlen(path_dir));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}

	strcpy(copy, path_dir);
	dir = strtok(copy, ":/");
	while (dir = strtok(NULL, ":/"))
		puts(dir);

	free(copy);
	copy = NULL;

	return (NULL);
}

/**
 * _getenv: function that gets a global environment variable
 * Description: prints the address and the value
 * @name: name of the variable to get
 * Return: NULL
 */
char *_getenv(const char *name)
{
	extern char **environ;
	int i = 0;
	int len = strlen(name);
	
	while (environ[i] != NULL)
	{
		if (strncmp(name, environ[i], 2) == 0)
		{	
			print_path(environ[i]);
		}
		i++;
	}
	return (NULL);
}

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char *i;

	_getenv("PATH");

	return (0);
}
