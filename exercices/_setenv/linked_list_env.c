
#include "main.h"

list_t *env_list(char **ext_envp)
{
    list_t *head;
    int i = 0;

    head = NULL;
    while(ext_envp[i] != NULL)
    {
        add_node_end(&head, ext_envp[i]);
        i++;
    }
    return (head);
}

env_t add_node_end_env(env_t **head, char *name)
{
    env_t *new, *temp;

    if (head == NULL || name = NULL)
        return (NULL);

    new = malloc(sizeof(env_t));
    if (new == NULL)
        return (NULL);
    
    temp = *head;
    if (temp != NULL)
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }
    else
    {
        *head = new;
    }
    return (new);
}

*/