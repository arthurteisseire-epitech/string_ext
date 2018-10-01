/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** strip.c
*/

#include <string.h>
#include "my.h"

char* strip(const char *src, const char *accept)
{
    char *dest = (char *)src + strspn(src, accept);

    return (strndup(dest, strlen(dest) - strrspn(dest, accept)));
}
