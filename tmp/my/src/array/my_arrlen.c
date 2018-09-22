/*
** EPITECH PROJECT, 2017
** File Name : my_arrlen.h
** File description:
** Project Name : clib_2018
*/

int my_arrlen(void **data)
{
	int i = 0;

	while (data[i])
		i++;
	return (i);
}
