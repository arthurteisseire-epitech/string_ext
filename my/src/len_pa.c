/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** len_pa.c
*/

#include <stddef.h>

size_t len_pa(const void **src_pa)
{
	int i = 0;

	while (src_pa[i] != NULL)
		i++;
	return (i);
}
