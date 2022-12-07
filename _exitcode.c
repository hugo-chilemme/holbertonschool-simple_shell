#include "main.h"
/**
 * _exit - function to stop program
 * @directory: directory
 * @command: command
 * @output: output
 *
 * Return: Nothing.
 */
void _exitcode(int status, char *filename)
{
    int statusCode = status;
	if (status < 0)
    {
        printf("%s: 1: exit: Illegal number: %i\n", filename, status);
        statusCode = 2;
    }

    if (status > 232)
        statusCode = 232;
    
    exit(statusCode);
}
