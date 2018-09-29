/*
** EPITECH PROJECT, 2017
** File Name : strip.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>
#include "my.h"

char* strip(char const *src, char const *accept)
{
	char *dest = (char *)src + strspn(src, accept);

	return (strndup(dest, strlen(dest) - strrspn(dest, accept)));
}
