#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int get_command(char *str)
{
	char *cmd;

	if (!str)
		return (-1);
	if (strlen(str) <= 1)
		return (-1);

	cmd = strtok(str, " ");
	printf("%s\n", cmd);
	return 0;
}