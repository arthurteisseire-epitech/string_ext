/*
** EPITECH PROJECT, 2017
** File Name : strrspn.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>
#include "my.h"

size_t strrspn(char const *src, char const *accept)
{
	size_t len = strlen(src);
	char *dest;

	if (len == 0)
		return (0);
	dest = (char *)src + len - 1;
	while (strchr(accept, *dest) != NULL) {
		if (dest == src)
			return (len);
		dest--;
	}
	return ((len - 1) - (dest - src));
}
