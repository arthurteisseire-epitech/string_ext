/*
** EPITECH PROJECT, 2017
** File Name : vcpy_pa.c
** File description:
** Project Name : clib_2018
*/

void vcpy_pa(int **dest_pa, int **src_pa)
{
	int _i = 0;

	while (src_pa[_i]) {
		*(dest_pa[_i]) = *(src_pa[_i]);
		_i++;
	}
}
