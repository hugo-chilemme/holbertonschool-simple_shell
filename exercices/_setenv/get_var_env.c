#include "main.h"

int get_var_env(env_t *env, const char *name)
{
    int i = 0;
    int j = 0;

    if (env == NULL)
        return(-1);

    while (env != NULL)
    {
        while (strncmp((env->name)[i], name[i], 2) == 0)
            i++;
        if (name[i] == '\0')
            break;
        env = env->next;
        j++;
    }
    return (j);
}