#ifndef MAIN
#define MAIN
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
extern char **environ;
int input_command(char **line, char *filename);
int execute_command(char **commands, char *filename);
int requirement_command(char **commands, char *filename);
int is_path(char *path_command);
char *path_command(char *execute_command);
void assembly_command(char *directory, char *command, char **output);
void env_command(void);
#endif
