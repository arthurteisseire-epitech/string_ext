/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** strcat_alloc.c
*/

#include <stdlib.h>
#include <string.h>

char *strcat_alloc(const char *str1, const char *str2)
{
    char *dest = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));

    if (dest != NULL) {
        strcpy(dest, str1);
        strcat(dest, str2);
    }
    return (dest);
}
