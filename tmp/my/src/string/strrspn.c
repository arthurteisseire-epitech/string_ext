/*
** EPITECH PROJECT, 2017
** File Name : strrspn.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>
#include "my.h"

unsigned long strrspn(char const *str, char const *accept)
{
	int it = strlen(str) - 1;
	unsigned long nb_match = 0;

	if (str[0] == '\0')
		return (0);
	while (strchr(accept, str[it]) != NULL) {
		nb_match++;
		if (it == 0)
			return (nb_match);
		it--;
	}
	return (nb_match);
}
