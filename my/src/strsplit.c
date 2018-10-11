/*
** EPITECH PROJECT, 2018
** my
** File description:
** strsplit.c
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char **strsplit(const char *str, const char *delim)
{
    unsigned int i = 0;
    char *str_tmp;
    char *save_ptr;
    char **dest = malloc(sizeof(char *) * strcount(str, delim) + 1);

    if (dest == NULL)
        return (NULL);
    str_tmp = strdup(str + strspn(str, delim));
    if (str_tmp == NULL)
        return (NULL);
    dest[0] = strtok_r(str_tmp, delim, &save_ptr);
    while (dest[i] != NULL) {
        i++;
        dest[i] = strtok_r(NULL, delim, &save_ptr);
    }
    return (dest);
}
