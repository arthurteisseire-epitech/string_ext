/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** strjoin.c
*/

#include <stdlib.h>
#include <string.h>
#include "string_ext.h"

char *strjoin(const char **array, const char *sep)
{
    size_t nb_str = arrlen((const void **)array);
    size_t total_len = arrstrlen(array) + nb_str * strlen(sep) + 1;
    char *dest = calloc(total_len, sizeof(char));

    if (dest == NULL || nb_str == 0)
        return (dest);
    strcpy(dest, array[0]);
    for (unsigned int i = 1; i < nb_str; i++) {
        if (array[i][0] != '\0') {
            strcat(dest, sep);
            strcat(dest, array[i]);
        }
    }
    return (dest);
}
