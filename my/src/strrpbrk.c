/*
** EPITECH PROJECT, 2018
** my
** File description:
** strrpbrk.c
*/

#include <string.h>
#include "my.h"

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
