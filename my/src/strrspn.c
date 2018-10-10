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
    char *end_ptr;

    if (len == 0)
        return (0);
    end_ptr = (char *)src + len - 1;
    while (strchr(accept, *end_ptr) != NULL) {
        if (end_ptr == src)
            return (len);
        end_ptr--;
    }
    return ((len - 1) - (end_ptr - src));
}
