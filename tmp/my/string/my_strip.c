/*
** EPITECH PROJECT, 2017
** File Name : my_strip.c
** File description:
** by Arthur Teisseire
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char *my_strip(char **str, char const *flags)
{
	char *to_free;
	int bflags;
	int eflags;

	if (str == NULL || *str == NULL)
		return (NULL);
	to_free = *str;
	bflags = strspn(*str, flags);
	eflags = count_endflags(*str, flags);
	*str += bflags;
	*str = strndup(*str, strlen(*str) - eflags);
	free(to_free);
	return (*str);
}
