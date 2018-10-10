/*
** EPITECH PROJECT, 2018
** my
** File description:
** arrlen.c
*/

#include <stddef.h>

size_t arrlen(const void **array)
{
    size_t i = 0;

    while (array[i] != NULL)
        i++;
    return (i);
}
