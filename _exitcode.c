#include "main.h"
/**
 * _exit - function to stop program
 * @status: statusCode
 * @filename: shell filename
 *
 * Return: Nothing.
 */
void _exitcode(int status, char *filename)
{
    int statusCode = status;
	if (status < 0)
    {
        dprintf(STDERR_FILENO, "%s: 1: exit: Illegal number: %i\n", filename, status);
        statusCode = 2;
    }

    if (status > 232)
        statusCode = 232;
    
    exit(statusCode);
}
