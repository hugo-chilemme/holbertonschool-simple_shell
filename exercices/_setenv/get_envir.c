#include "main.h"
/**
 * get_envir - function that gets a global environment variable
 * Description: prints the address and the value
 * Return: NULL
 */
char *get_envir(char *ext_envp)
{
	int i = 0;
	
	while (ext_envp[i] != NULL)
	{
		printf("%s\n", ext_envp[i]);
		i++;
	}
	return (NULL);
}
