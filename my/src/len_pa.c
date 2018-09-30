/*
** EPITECH PROJECT, 2017
** File Name : len_pa.c
** File description:
** Project Name : clib_2018
*/

#include <stddef.h>

size_t len_pa(const void **src_pa)
{
	int i = 0;

	while (src_pa[i] != NULL)
		i++;
	return (i);
}
