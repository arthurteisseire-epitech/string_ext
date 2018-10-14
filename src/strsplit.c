/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** strsplit.c
*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "string_ext.h"

static bool no_tokens(char **dest)
{
    return (dest[0] == NULL);
}

static void insert_tokens(char **dest, char *str_dup, const char *delim)
{
    unsigned int i = 0;
    char *save_ptr;

    dest[0] = strtok_r(str_dup, delim, &save_ptr);
    while (dest[i] != NULL)
        dest[++i] = strtok_r(NULL, delim, &save_ptr);
}

char **strsplit(const char *str, const char *delim)
{
    size_t nb_tokens = strcount(str, delim);
    char **dest = malloc(sizeof(char *) * (nb_tokens + 1));
    char *str_dup;

    if (dest == NULL)
        return (NULL);
    str_dup = strdup(str + strspn(str, delim));
    if (str_dup == NULL)
        return (NULL);
    insert_tokens(dest, str_dup, delim);
    if (no_tokens(dest))
        free(str_dup);
    return (dest);
}
