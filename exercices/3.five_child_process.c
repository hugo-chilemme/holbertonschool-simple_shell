#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
	pid_t _pid;
	pid_t child_p = 1;
	int i = 0;
	int status;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	_pid = getpid();

	while (i <=4 && (child_p != 0))
	{
		child_p = fork();
		if (child_p == -1)
		{
			printf("Error");
			return (1);
		}
		wait(&status);
		i++;
	}
	if (child_p == 0)
	{
		printf("ID CHILD PROCESS: %u\nID PARENT PROCESS: %u\n", getpid(), getppid());
		printf("--------------------------------\n\n");
	}
	else
	{
		printf("%u PARENT PROCESS IS %u\n", _pid, child_p);
	}
	if (execve(argv[0], argv, NULL) == -1)
		return (0);
}	
