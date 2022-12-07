#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *_getenv(const char *name)
{
	extern char **environ;
	int i = 0;
	int len = strlen(name);
	
	while (environ[i] != NULL)
	{
		if (strncmp(name, environ[i], 2) == 0)
		{	printf("%p\n", (&environ[i]));
			printf("%s\n", environ[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char *i;

	_getenv("PATH");

	return (0);
}
