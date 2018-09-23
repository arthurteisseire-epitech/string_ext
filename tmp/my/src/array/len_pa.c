/*
** EPITECH PROJECT, 2017
** File Name : len_pa.c
** File description:
** Project Name : clib_2018
*/

int len_pa(void **data_pa)
{
	int len_i = 0;

	while (data_pa[len_i])
		len_i++;
	return (len_i);
}
