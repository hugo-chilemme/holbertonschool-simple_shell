#include "main.h"
/**
 * input_command - function that input command
 * @prompt: prompt
 * @filename: filename
 *
 * Return: Nothing.
 */
int input_command(char **prompt, char *filename, int status)
{
	char *split_text;
	int index = 0;
	char *arguments[1024] = {NULL};
	int is_exit = 0;

	if (strstr(*prompt, "exit"))
		is_exit = 1;

	split_text = strtok(*prompt, " \t\n\r");
	while (split_text)
	{
		if (strlen(split_text) > 0)
		{
			arguments[index] = split_text;
			index += 1;
		}
		split_text = strtok(NULL, " \t\n\r");
	}
	if (!arguments[0])
		return (0);
		
	status = requirement_command(arguments, filename);

	if (isatty(STDIN_FILENO) == 0)
	{
		free(*prompt);
		
		if (is_exit)
			_exitcode(2, filename);
		_exitcode(127, filename);
	}

	if ((status != 0 && status != 1) || is_exit)
	{
		free(*prompt);
		_exitcode(status, filename);
	}


	return (2);
}
