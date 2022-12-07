#include "main.h"
/**
 * env_command - implements the env built-in
 * Description prints the current environment
 * @envp: the extern environ
 * Return: 0
 */
int env_command(char **envp)
{
	int i = 0;

	while (envp[i] != NULL)
	{
		printf("%s\n", envp[i]);
		i++;
	}
	return (0);
}
