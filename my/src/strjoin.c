/*
** EPITECH PROJECT, 2018
** my
** File description:
** strjoin.c
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char *strjoin(const char **array, const char *sep)
{
    unsigned int i;
    size_t nb_str = arrlen((const void **) array);
    size_t total_len = arrstrlen(array) + nb_str * strlen(sep);
    char *dest = calloc(total_len, sizeof(char));

    if (dest == NULL || nb_str == 0)
        return (dest);
    for (i = 0; i < nb_str - 1; i++) {
        if (array[i][0] != '\0') {
            strcat(dest, array[i]);
            strcat(dest, sep);
        }
    }
    strcat(dest, array[i]);
    return (dest);
}
