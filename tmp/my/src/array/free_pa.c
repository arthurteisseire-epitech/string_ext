/*
** EPITECH PROJECT, 2017
** File Name : free_pa.c
** File description:
** Project Name : clib_2018
*/

#include <stdlib.h>

void free_pa(void **_pa)
{
	int _i = 0;

	while (_pa[_i] != NULL) {
		free(_pa[_i]);
		_i++;
	}
	free(_pa);
}
