/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** strcount.c
*/

#include <string.h>

size_t strcount(const char *str, const char *delim)
{
	size_t nb_match = 0;

	while (*str != '\0') {
		str += strspn(str, delim);
		if (strchr(delim, *str) == NULL)
			nb_match++;
		str += strcspn(str, delim);
	}
	return (nb_match);
}
