#include "main.h"
/**
 * execute_command - a function that execute commands
 * @commands: commands
 * @filename: filename
 *
 * Return: Nothing.
 */
int execute_command(char **commands, char *filename)
{
	pid_t pid;
	int status = 0;

	pid = fork();
	if (pid == 0 && commands[0])
	{
		if (execve(commands[0], commands, environ) != -1)
			return (0);
		dprintf(STDERR_FILENO, "%s: cannot access '%s': No such file or directory\n",
				commands[0], filename);
		exit(2);
	}
	else if (pid == -1)
		perror("Error");

	waitpid(pid, &status, 0);
	return (1);
}
