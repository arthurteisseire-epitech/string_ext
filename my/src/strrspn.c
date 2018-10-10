/*
** EPITECH PROJECT, 2018
** my
** File description:
** strrspn.c
*/

#include <string.h>
#include "my.h"

size_t strrspn(const char *src, const char *accept)
{
    size_t len = strlen(src);
    char *dest;

    if (len == 0)
        return (0);
    dest = (char *)src + len - 1;
    while (strchr(accept, *dest) != NULL) {
        if (dest == src)
            return (len);
        dest--;
    }
    return ((len - 1) - (dest - src));
}
