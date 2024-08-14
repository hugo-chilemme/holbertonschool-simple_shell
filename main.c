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


int main(void)
{
    char *text = NULL;
    int i = 1;
    char *lines[1024] = {NULL};
    int lineCount = 0;
    int lineProcess = 0;
    char *line = NULL;
    char *args[1024] = {NULL};

    size_t len = 0;

    while(getline(&text, &len, stdin) != -1)
    {
        lines[lineCount] = strdup(text);
        lines[lineCount][strlen(lines[lineCount]) - 1] = '\0';

        lineCount++;
    }

    free(text);


    for (; lineProcess < lineCount; lineProcess++)
    {
        line = lines[lineProcess];
        i = 1;
        
        args[0] = strtok(line, " ");

        while ((args[i] = strtok(NULL, " ")))
        {
            i++;
        }

        execute(args);

        free(lines[lineProcess]);


    }


    

   

    return 0;
}