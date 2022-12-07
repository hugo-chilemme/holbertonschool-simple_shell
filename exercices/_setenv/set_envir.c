#include "main.h"

int set_envir(env_t environ, char *name, char *value)
{
    char *str;
    int index, i = 0;
    env_t new_value;

    str = strdup(name);
    str = strcat(name, "=");
    str = strcat(name, value);
    index = get_var_env(environ, name);

    printf("%s", str);
    new_value = environ;
    while (i < index)
    {
        new_value = new_value->next;
        i++;
    }
    free(new_value->value);
    new_value->value = str;

    free(str);
    return (0);
}