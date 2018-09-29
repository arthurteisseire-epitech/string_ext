/*
** EPITECH PROJECT, 2017
** File Name : strlast.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>

char *strlast(char const *str)
{
	return (str[0] == '\0' ? NULL : (char *)(str + strlen(str) - 1));
}
