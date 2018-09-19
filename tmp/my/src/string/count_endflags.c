/*
** EPITECH PROJECT, 2017
** File Name : count_endflags.c
** File description:
** by Arthur Teisseire
*/

#include <string.h>
#include "my.h"

int count_endflags(char const *str, char const *flags)
{
	int len = strlen(str) - 1;
	int i = len;

	if (i < 0)
		return (0);
	while (strchr(flags, str[i]) != NULL)
		i--;
	return (len - i);
}
