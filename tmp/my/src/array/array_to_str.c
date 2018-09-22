/*
** EPITECH PROJECT, 2017
** File Name : array_to_str.c
** File description:
** Project Name : clib_2018
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char *array_to_str(char **array, char *between)
{
	int i = 1;
	int len_between = strlen(between);
	char *res;

	if (array[0] == NULL)
		return (NULL);
	res = strdup(array[0]);
	if (res == NULL)
		return (NULL);
	while (array[i] != NULL) {
		if (len_between != 0)
			res = concat(res, between, len_between);
		res = concat(res, array[i], strlen(array[i]));
		if (res == NULL)
			return (NULL);
		i++;
	}
	return (res);
}
