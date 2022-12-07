#include <stddef.h>
#include <stdio.h>

int main(int ac, char **av, char **env)
{
	extern char **environ;
	(void)ac;
	(void)av;

	printf("The address of environ is %p\n", *environ);
	printf("The address of env is %p\n", *env);
	return (0);
}
