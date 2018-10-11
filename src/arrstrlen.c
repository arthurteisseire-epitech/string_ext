/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** arrstrlen.c
*/

#include <string.h>

size_t arrstrlen(const char **array)
{
    unsigned int i = 0;
    size_t len = 0;

    while (array[i] != NULL) {
        len += strlen(array[i]);
        i++;
    }
    return (len);
}
