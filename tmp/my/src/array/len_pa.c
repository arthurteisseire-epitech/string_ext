/*
** EPITECH PROJECT, 2017
** File Name : len_pa.c
** File description:
** Project Name : clib_2018
*/

int len_pa(void **_pa)
{
	int len_i = 0;

	while (_pa[len_i])
		len_i++;
	return (len_i);
}
