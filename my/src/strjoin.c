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
    unsigned int i = 0;
    size_t nb_str = arrlen((const void **) array);
    char *dest = malloc(sizeof(char) *
        ((arrstrlen(array) + (nb_str * strlen(sep)) + 1)));

    if (dest == NULL)
        return (NULL);
    dest[0] = '\0';
    if (nb_str == 0)
        return (dest);
    while (i < nb_str - 1) {
        if (array[i][0] != '\0') {
            strcat(dest, array[i]);
            strcat(dest, sep);
        }
        i++;
    }
    strcat(dest, array[i]);
    return (dest);
}
