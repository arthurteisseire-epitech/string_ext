/*
** EPITECH PROJECT, 2018
** my
** File description:
** strsplit.c
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char **strsplit(const char *src, const char *delim)
{
    unsigned int i = 0;
    char *src_p;
    char *save_ptr;
    char **dest = malloc(sizeof(char *) * strcount(src, delim) + 1);

    if (dest == NULL)
        return (NULL);
    src_p = strdup(src + strspn(src, delim));
    if (src_p == NULL)
        return (NULL);
    dest[0] = strtok_r(src_p, delim, &save_ptr);
    while (dest[i] != NULL) {
        i++;
        dest[i] = strtok_r(NULL, delim, &save_ptr);
    }
    return (dest);
}
