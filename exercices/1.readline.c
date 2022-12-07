#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	char *buffer = NULL;
	size_t bufsize[BUFSIZ];

	printf("$ ");
	while (getline(&buffer, bufsize, stdin) != -1)
	{
		printf("%s", buffer);
		printf("$ ");
	}
	return 0;
}
