/*
** EPITECH PROJECT, 2018
** my
** File description:
** strip.c
*/

#include <string.h>
#include "my.h"

char *strip(const char *src, const char *accept)
{
    char *dest = (char *)src + strspn(src, accept);
    size_t dest_len = strlen(dest) - strrspn(dest, accept);

    return (strndup(dest, dest_len));
}
