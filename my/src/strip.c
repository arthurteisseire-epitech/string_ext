/*
** EPITECH PROJECT, 2017
** File Name : strip.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>

char* strip(char const *src, char const *accept)
{
	char *dest = (char *)src + strspn(src, accept);

	return (strndup(dest, strcspn(dest, accept)));
}
