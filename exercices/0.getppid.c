#include <stdio.h>
#include <unistd.h>

int main()
{
	int p_id, p_pid;

	p_id = getpid();
	p_pid = getppid();

	printf("Process ID: %d\n", p_id);
	printf("Parent Process ID: %d\n", p_pid);

	return 0;
}
