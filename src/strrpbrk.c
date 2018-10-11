/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** strrpbrk.c
*/

#include <string.h>
#include "string_ext.h"

char *strrpbrk(char const *str, char const *accept)
{
    char *dest = strlast(str);

    if (dest == NULL)
        return (NULL);
    while (strchr(accept, *dest) == NULL) {
        if (dest == str)
            return (NULL);
        dest--;
    }
    return (dest);
}
