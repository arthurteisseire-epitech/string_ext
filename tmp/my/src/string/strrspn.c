/*
** EPITECH PROJECT, 2017
** File Name : strrspn.c
** File description:
** by Arthur Teisseire
*/

#include <string.h>
#include "my.h"

int strrspn(char const *str, char const *accept)
{
	int it = strlen(str) - 1;
	int nb_match = 0;

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
