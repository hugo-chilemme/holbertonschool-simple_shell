// create simple shell
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int execute(char *args[])
{
    pid_t pid;
    int status;

    pid = fork();
    if (pid == 0)
    {
        if (execvp(args[0], args) == -1)
        {
            perror("Error");
        }
        exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
        perror("Error");
    }
    else
    {
        do
        {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return 1;
}


int main(int argc, char *argv[])
{
    int i = 1;
    char *line = NULL;
    size_t len = 0;

    getline(&line, &len, stdin);
    char *args[1024] = {NULL};

    args[0] = strtok(line, " \n");

    while (args[i] = strtok(NULL, " \n"))
    {
        i++;
    }

    execute(args);

}