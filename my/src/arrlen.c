/*
** EPITECH PROJECT, 2018
** my
** File description:
** len_pa.c
*/

#include <stddef.h>

size_t arrlen(const void **src_pa)
{
    size_t i = 0;

    while (src_pa[i] != NULL)
        i++;
    return (i);
}
