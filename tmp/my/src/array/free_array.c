/*
** EPITECH PROJECT, 2017
** File Name : free_2d.c
** File description:
** Project Name : clib_2018
*/

#include <stdlib.h>

void free_array(void **array)
{
	int i = 0;

	while (array[i] != NULL) {
		free(array[i]);
		i++;
	}
	free(array);
}
