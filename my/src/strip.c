/*
** EPITECH PROJECT, 2017
** File Name : strip.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>
#include "my.h"

char* strip(const char *src, const char *accept)
{
	char *dest = (char *)src + strspn(src, accept);

	return (strndup(dest, strlen(dest) - strrspn(dest, accept)));
}
