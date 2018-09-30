/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** strlast.c
*/

#include <string.h>

char *strlast(const char *str)
{
	return (str[0] == '\0' ? NULL : (char *)(str + strlen(str) - 1));
}
