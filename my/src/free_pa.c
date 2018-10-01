/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** free_pa.c
*/

#include <stdlib.h>

void free_pa(void **tofree_pa)
{
    int i = 0;

    while (tofree_pa[i] != NULL) {
        free(tofree_pa[i]);
        i++;
    }
    free(tofree_pa);
}
