/*
** EPITECH PROJECT, 2017
** File Name : pcpy_pa.c
** File description:
** Project Name : clib_2018
*/

void pcpy_pa(void **dest_pa, void **src_pa)
{
	int _i = 0;

	while (src_pa[_i]) {
		dest_pa[_i] = src_pa[_i];
		_i++;
	}
	dest_pa[_i] = src_pa[_i];
}
