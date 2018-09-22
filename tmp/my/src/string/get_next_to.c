/*
** EPITECH PROJECT, 2017
** File Name : get_next_to.c
** File description:
** Project Name : clib_2018
*/

#include <stddef.h>
#include <string.h>
#include "my.h"

char *get_next_to(char const *str, char const *flags)
{
	int i = 0;
	int len = strlen(flags);

	while (str[i] != '\0' && strncmp(&str[i], flags, len) != 0)
		i++;
	if (str[i] == '\0')
		return (NULL);
	return (strdup(str + i + strlen(flags)));
}
