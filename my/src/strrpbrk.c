/*
** EPITECH PROJECT, 2018
** my
** File description:
** strrpbrk.c
*/

#include <string.h>
#include "my.h"

char *strrpbrk(char const *src, char const *accept)
{
    char *dest = strlast(src);

    if (dest == NULL)
        return (NULL);
    while (strchr(accept, *dest) == NULL) {
        if (dest == src)
            return (NULL);
        dest--;
    }
    return (dest);
}
