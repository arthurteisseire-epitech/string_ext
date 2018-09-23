/*
** EPITECH PROJECT, 2017
** File Name : vcpy_pa.c
** File description:
** Project Name : clib_2018
*/

#include <stddef.h>
#include <string.h>

void vcpy_pa(void **dest_pa, void **src_pa, size_t size)
{
	int _i = 0;

	while (src_pa[_i]) {
		memcpy(dest_pa[_i], src_pa[_i], size);
		_i++;
	}
}
