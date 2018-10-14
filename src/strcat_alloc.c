/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** strcat_alloc.c
*/

#include <stdlib.h>
#include <string.h>

char *strcat_alloc(const char *str_left, const char *str_right)
{
    size_t dest_len = strlen(str_left) + strlen(str_right);
    char *dest = malloc(sizeof(char) * (dest_len + 1));

    if (dest != NULL) {
        strcpy(dest, str_left);
        strcat(dest, str_right);
    }
    return (dest);
}
