#include "main.h"
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 *
 * Return: Shell.
 */

int main(int argc, char *argv[])
{
	char *prompt = NULL;
	char *filename = argv[0];
	size_t len;
	int user_input = 0;
	int last_command_status = 0;
	(void)argc;

	signal(SIGINT, SIG_IGN);

	while (user_input != -1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");

		fflush(stdin);
		user_input = getline(&prompt, &len, stdin);

		if (user_input == -1 || !prompt || len < 2)
		{
			free(prompt);
			continue;
		}

		if (strcmp(prompt, "\n") != 0)
			last_command_status = input_command(&prompt, filename, last_command_status);

	}
	return (0);
}
