/*
** EPITECH PROJECT, 2017
** File Name : free_pa.c
** File description:
** Project Name : clib_2018
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
