/*
** EPITECH PROJECT, 2018
** my
** File description:
** arrstrlen.c
*/

#include <string.h>

size_t arrstrlen(const char **array)
{
    size_t i = 0;
    size_t len = 0;

    while (array[i] != NULL) {
        len += strlen(array[i]);
        i++;
    }
    return (len);
}
