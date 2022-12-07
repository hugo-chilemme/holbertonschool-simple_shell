#include "shell.h"
#include <stdio.h>
int get_command(char *str)
{
	char *cmd;

	if (!str)
		return (-1);
	if (strlen(str) <= 1)
		return (-1);

	cmd = strtok(str, "\n");
	exec_cmd(&cmd);
	return (0);
}
